/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/23 21:22:48 by marvin            #+#    #+#             */
/*   Updated: 2026/11/25 01:46:04 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int days[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

bitpair		valid_csv_format("0000-00-00,", FLT_MAX);
bitpair		valid_input_format("0000-00-00 | ", 1000.0f);

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

BitcoinExchange::BitcoinExchange()
{}

BitcoinExchange::BitcoinExchange( const BitcoinExchange & src ) : _exchange_rates(src.getExchangeRates())
{}

BitcoinExchange::BitcoinExchange( char* FileName )
{
	try
	{
		this->_parse_input(FileName);
	}
	catch (std::invalid_argument & e)
	{
		std::cout << e.what() << std::endl;
	}
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
	{
		this->test = src.test;
	}
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void	BitcoinExchange::_parser_setup( char const * FileName )
{
	std::fstream	input_file;
	std::fstream	csv_file;

	input_file.open(FileName, std::fstream::in);
	csv_file.open("data.csv", std::fstream::in);
	if (input_file.is_open() == false || csv_file.is_open() == false)
		std::cout << "wrong input and database files or permission settings!" << std::endl;
	_parser(input_file, )
	input_file.close();
	csv_file.close():
	return NULL;
}

void	BitcoinExchange::_parser( std::fstream const & file_to_parse , bitpair const & valid_format, bitmap & destination )
{
	std::string		line;

	std::getline(file_to_parse, line, '\n');
	while (std::getline(file_to_parse, line, '\n'))
	{
		Validate_Line_By_Given_Format(line, valid_format);
		destination.insert({line.subsrt(0, 10), std::strtod(substr(strlen(valid_format), line.length() - strlen(valid_format) + 1))});
	}
}

void BitcoinExchange::Validate_Line_By_Given_Format( std::string const & line, bitpair const & valid_format )
{
	size_t valid_len = strlen(valid_format.first());

	//THIS LOOP CHECKS THE VALIDITY OF THE FORMAT, ONE POSITION AT A TIME AGAINST THE VALID FORMAT STRING
	if (line.size() <= valid_len)
		throw std::invalid_argument("Bad file line format");
	for (size_t i = 0; i < valid_len; ++i)
	{
		if (valid_format.first()[i] == '0' ?
				!std::isdigit(static_cast<unsigned char>(line[i])) : line[i] != valid_format.first()[i])
			throw std::invalid_argument("Bad file line format");
	}

	int year  = std::atoi(line.substr(0, 4).c_str());
	int month = std::atoi(line.substr(5, 2).c_str());
	int day   = std::atoi(line.substr(8, 2).c_str());

	//VERIFICATION BOOL FOR IF THIS YEAR SKIP THE 29TH OF FEBRUARY OR NOT
	bool leap = ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0);

	//VALID DATE FORMAT CHECK
	if (month < 1 || month > 12 || day < 1 || day > days[month - 1]
		|| (month == 2 && day == 29 && !leap))
		throw std::invalid_argument("Incorrect date format");

	//VALID FLOAT CHECK, CHECKS EVERYTHING AFTER POSITION 13 AS A FLOAT
	std::string value = line.substr(valid_len, line.length() - valid_len + 1);
	size_t dot = value.find('.');
	if (value.find_first_not_of("0123456789.") != std::string::npos || dot != value.rfind('.')
			|| dot == 0 || dot == value.size() - 1)
		throw std::invalid_argument("Incorrect exchange value format");
	errno = 0;
	double n = std::strtod(value.c_str(), NULL);
	if (errno == ERANGE || n > valid_format.second())
		throw std::invalid_argument("Out of range exchange value format");
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::multimap<std::string, float> const & BitcoinExchange::getExchangeRates() const
{
	return _exchange_rates;
}

/* ************************************************************************** */
