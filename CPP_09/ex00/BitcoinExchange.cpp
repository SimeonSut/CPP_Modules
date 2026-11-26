/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/23 21:22:48 by marvin            #+#    #+#             */
/*   Updated: 2026/11/26 02:29:27 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

typedef  std::pair<std::string, float>		bitpair;
typedef  std::multimap<std::string, float>	bitmap;

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

BitcoinExchange::BitcoinExchange()
{
	this->_Parser();
}

BitcoinExchange::BitcoinExchange( const BitcoinExchange & src ) :
_Dates_For_Rates(src.Get_Dates_For_Rates())
{
	this->_Parser();
}

BitcoinExchange::BitcoinExchange( const std::string NewFileName ) : FileName(NewFileName)
{
	this->_Parser();
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

BitcoinExchange::~BitcoinExchange()
{}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

BitcoinExchange &				BitcoinExchange::operator=( BitcoinExchange const & src )
{
	if ( this != &src )
		_Dates_For_Rates = src.Get_Dates_For_Rates();
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void	BitcoinExchange::_Parser( )
{
	std::ifstream	csv_file;
	std::string		line;

	csv_file.open("data.csv", std::fstream::in);
	if (csv_file.is_open() == false)
		std::cout << "wrong input and database files or permission settings!" << std::endl;
	try
	{
		_Fill_Csv( csv_file );
	}
	catch ( std::invalid_argument & e)
	{
		std::cout << e.what() << std::endl;
	}
	csv_file.close();
}

void	BitcoinExchange::_Fill_Csv( std::ifstream & file_to_parse )
{
	std::string		line;

	std::getline(file_to_parse, line);
	while (std::getline(file_to_parse, line))
	{
		if (line.at(line.length() - 1) == '\r')
			line.erase(line.length() - 1, std::string::npos);
		bitpair valid_line = Validate_Line_By_Given_Format(line, _Valid_Csv_Format);
		if ( valid_line.second < 0 )
			throw std::invalid_argument("Error : invalid data.csv file!");
		_Dates_For_Rates.insert(valid_line);
	}
}

void	BitcoinExchange::Bitcoin_Conversion()
{
	std::ifstream		input_file;
	std::string			line;

	input_file.open(FileName.c_str(), std::fstream::in);
	if (input_file.is_open() == false)
	{
		std::cout << "wrong input and database files or permission settings!" << std::endl;
		return ;
	}
	std::getline(input_file, line);
	while ( std::getline(input_file, line) )
	{
		if (line.at(line.length() - 1) == '\r')
			line.erase(line.length() - 1, std::string::npos);
		bitpair correct_line = Validate_Line_By_Given_Format( line, _Valid_Input_Format );
		if (correct_line.second < 0.0f)
		{
			std::cout << correct_line.first << std::endl;
			continue;
		}
		bitmap::iterator csv_it = _Dates_For_Rates.upper_bound( correct_line.first );
		if (csv_it == _Dates_For_Rates.begin())
		{
			std::cout << "Error : given exchange date at this line predates known database!" << std::endl;
			continue;
		}
		csv_it--;
		std::cout << correct_line.first << " => " << correct_line.second << " = " << correct_line.second * csv_it->second << std::endl;
	}
	input_file.close();
}

bitpair BitcoinExchange::Validate_Line_By_Given_Format( std::string const & line, bitpair const & valid_format )
{
	size_t valid_len = valid_format.first.length();

	//THIS LOOP CHECKS THE VALIDITY OF THE FORMAT, ONE POSITION AT A TIME AGAINST THE VALID FORMAT STRING
	if (line.size() <= valid_len)
		return bitpair("Error : Bad file line format", -1.0f);
	for (size_t i = 0; i < valid_len; ++i)
	{
		if (valid_format.first[i] == '0' ?
				!std::isdigit(static_cast<unsigned char>(line[i])) : line[i] != valid_format.first[i])
			return bitpair("Error : Bad file line format", -1.0f);
	}

	int year  = std::atoi(line.substr(0, 4).c_str());
	int month = std::atoi(line.substr(5, 2).c_str());
	int day   = std::atoi(line.substr(8, 2).c_str());

	//VERIFICATION BOOL FOR IF THIS YEAR SKIP THE 29TH OF FEBRUARY OR NOT
	bool leap = ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0);

	//VALID DATE FORMAT CHECK
	std::string valid_date = line.substr(0, 10);
	if (month < 1 || month > 12 || day < 1 || day > Days[month - 1]
		|| (month == 2 && day == 29 && !leap))
		return bitpair(("Error : bad input => " + valid_date), -1.0f);

	//VALID FLOAT CHECK, CHECKS EVERYTHING AFTER POSITION 13 AS A FLOAT
	std::string value = line.substr(valid_len, line.length() - valid_len);
	size_t dot = value.find('.');
	if (value.find_first_not_of("0123456789.") != std::string::npos || dot != value.rfind('.')
			|| dot == 0 || dot == value.size() - 1)
		return bitpair("Error : Incorrect float format", -1.0f);
	errno = 0;
	double n = std::strtod(value.c_str(), NULL);
	if (errno == ERANGE || n > valid_format.second)
		return bitpair("Error : Incorrect too large a number", -1.0f);
	return bitpair(valid_date, static_cast<float>(n));
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

bitmap const & BitcoinExchange::Get_Dates_For_Rates() const
{
	return _Dates_For_Rates;
}

/* ************************************************************************** */

const bitpair	BitcoinExchange::_Valid_Csv_Format("0000-00-00,", FLT_MAX);
const bitpair	BitcoinExchange::_Valid_Input_Format("0000-00-00 | ", 1000.0f);
const int 		BitcoinExchange::Days[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
