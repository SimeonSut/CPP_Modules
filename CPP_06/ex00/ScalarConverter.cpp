/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssutarmi <ssutarmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 15:58:04 by marvin            #+#    #+#             */
/*   Updated: 2026/11/07 17:41:58 by ssutarmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

static int Type( std::string literal );
static bool is_Char( std::string & input );
static bool	is_Int( std::string & input );
static int	Fraction( std::string & input );

static void	toChar( std::string & input, int type );
static void	toInt( std::string & input, int type );
static void	toFloat( std::string input, int type );
static void	toDouble( std::string input, int type );

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ScalarConverter::ScalarConverter()
{
	if (DEBUG)
		std::cout << "Default Constructor called" << std::endl;
}

ScalarConverter::ScalarConverter( ScalarConverter const & src )
{
	if (&src == this)
		return ;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ScalarConverter::~ScalarConverter()
{
	if (DEBUG)
		std::cout << "Destructor Called" << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

/*
** --------------------------------- METHODS ----------------------------------
*/

void	ScalarConverter::convert( std::string literal )
{
	if ( literal.empty() )
		return ;
	int	type = Type( literal );
	toChar( literal, type );
	toInt( literal, type );
	toFloat( literal, type );
	toDouble( literal, type );
}

/*
** --------------------------------- TYPE DETERMINATION FUNCTIONS ---------------------------------
*/

static int Type( std::string literal )
{
	if ( is_Char( literal ) == true )
		return CHAR;
	else if ( is_Int( literal ) == true )
		return INT;
	return Fraction( literal );
}

static bool is_Char( std::string & input )
{
	return (input.length() == 3 && input.at(0) == '\'' && input.at(2) == '\'' ? true : false);
}

static bool is_Int( std::string & input )
{
	int	i = input[0] == '-' ? 1 : 0;

	if ( !input[i] )
		return false;
	for ( ; input[i]; i++ )
	{
		if ( isdigit(input.at(i)) == false )
			return false;
	}
	if ( input.at(0) == '-' && ((input.length() > 11) || input.length() < 2) )
		return false;
	else if ( (isdigit(input.at(0)) && input.length() > 10) )
		return false;
	else if ( (input.at(0) == '-' && input.length() == 11) && input.compare("-2147483648") > 0 )
		return false;
	else if ( (input.at(0) == '+' && input.length() == 10) && input.compare("2147483647") > 0 )
		return false;
	return true;
}

static int Fraction( std::string & input )
{
	size_t	point = input.find('.');
	size_t	i = input[0] == '-' ? 1 : 0;

	try
	{
		input.at(point - 1);
		if ( isdigit(input.at(point + 1)) == false || point == input.npos || point != input.rfind('.') )
			return NONE;
	}
	catch ( std::out_of_range & e )
	{
		return NONE;
	}
	for ( ; i < point; i++ )
		if ( isdigit( input.at(i) ) == false )
			return NONE;
	for ( size_t i = point + 1, k = 0; i + 1 <= input.size() ; i++, k++ )
	{
		if ( isdigit( input.at(i) == false ) || k >= 15 )
			return NONE;
		point++;
	}
	if ( isdigit(input.at(point)) )
		return DOUBLE;
	else if ( input.at(point) == 'f' )
		return FLOAT;
	return NONE;
}

/*
** --------------------------------- TYPE TRANSFORMATION FUNCTIONS ---------------------------------
*/

static void	toChar( std::string & input, int type )
{
	int					casti;
	float				castf;
	double				castd;
	std::stringstream	stream(input);

	std::cout << "char : ";
	switch ( type )
	{
		case NONE:
			std::cout << "impossible" << std::endl;
			break;
		case CHAR:
			std::cout << static_cast<char>(input.at(1)) << std::endl;
			break;
		case INT:
			casti = atoi(input.c_str());
			if ( casti <= 31 || casti >= 176 )
				std::cout << "Non displayable" << std::endl;
			else
				std::cout << "'" << static_cast<char>(casti) << "'" << std::endl;
			break;
		case FLOAT:
			stream >> castf;
			if ( castf <= 31.0f || castf >= 176.0f )
				std::cout << "Non displayable" << std::endl;
			else
				std::cout << "'" << static_cast<char>(castf) << "'" << std::endl;
			break;
		case DOUBLE:
			stream >> castd;
			if ( castd <= 31.0 || castd >= 176.0 )
				std::cout << "Non displayable" << std::endl;
			else
				std::cout << "'" << static_cast<char>(castd) << "'" << std::endl;
			break;
	}
}

static void	toInt( std::string & input, int type )
{
	int					casti;
	float				castf;
	double				castd;
	std::stringstream	stream(input);

	std::cout << "int : ";
	switch ( type )
	{
		case NONE:
			std::cout << "impossible" << std::endl;
			break;
		case CHAR:
			std::cout << static_cast<int>(input.at(1)) << std::endl;
			break;
		case INT:
			stream >> casti;
			std::cout << casti << std::endl;
			break;
		case FLOAT:
			stream >> castf;
			std::cout << static_cast<int>(castf) << std::endl;
			break;
		case DOUBLE:
			stream >> castd;
			std::cout << static_cast<int>(castd) << std::endl;
			break;
	}
}

static void	toFloat( std::string input, int type )
{
	int					casti;
	float				castf;
	double				castd;
	std::stringstream	stream(input);

	std::cout << "float : ";
	switch ( type )
	{
		case NONE:
			std::cout << "Impossible" << std::endl;
			break;
		case CHAR:
			std::cout << static_cast<float>(input[1]) << std::endl;
			break;
		case INT:
			stream >> casti;
			std::cout << static_cast<double>(casti) << ".0f" << std::endl;
			break;
		case FLOAT:
			stream >> castf;
			std::cout << castf;
			if (fmod(castf, 1) == 0.0f)
				std::cout << ".0f" << std::endl;
			else
				std::cout << "f" << std::endl;
			break;
		case DOUBLE:
			stream >> castd;
			std::cout << static_cast<float>(castd);
			if (fmod(castd, 1) == 0.0f)
				std::cout << ".0f" << std::endl;
			else
				std::cout << "f" << std::endl;
			break;
	}
}


static void	toDouble( std::string input, int type )
{
	int					casti;
	float				castf;
	double				castd;
	std::stringstream	stream(input);

	std::cout << "double : ";
	switch ( type )
	{
		case NONE:
			std::cout << "Impossible" << std::endl;
			break;
		case CHAR:
			std::cout << static_cast<double>(input[1]) << std::endl;
			break;
		case INT:
			stream >> casti;
			std::cout << static_cast<double>(casti) << ".0" << std::endl;
			break;
		case FLOAT:
			stream >> castf;
			std::cout << static_cast<double>(castf);
			if (fmod(castf, 1) == 0.0f)
				std::cout << ".0";
			std::cout << std::endl;
			break;
		case DOUBLE:
			stream >> castd;
			std::cout << castd;
			if (fmod(castd, 1) == 0.0f)
				std::cout << ".0";
			std::cout << std::endl;
			break;
	}
}
