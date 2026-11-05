/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssutarmi <ssutarmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 15:58:04 by marvin            #+#    #+#             */
/*   Updated: 2026/11/05 20:18:45 by ssutarmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

static bool is_Int( std::string input );
static int which_fraction_type( std::string input );

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
ScalarConverter &				ScalarConverter::operator=( ScalarConverter const & rhs )
{
	if (DEBUG)
		std::cout << "assignation called" << std::endl;
	//if ( this != &rhs )
	//{
		//this->_value = rhs.getValue();
	//}
	return *this;
}*/

void	ScalarConverter::convert( std::string literal )
{
	if ( literal.empty() )
		;
}

/*
** --------------------------------- METHODS ----------------------------------
*/


/*
** --------------------------------- ACCESSOR ---------------------------------
*/

static bool is_Int( std::string input )
{
	for ( int i = 0; input[i]; i++ )
		if ( isdigit(input[i]) == false )
			return false;
	return true;
}

static int which_fraction_type( std::string input )
{
	size_t	point = input.find('.');

	if ( (point != input.npos && point != input.rfind('.')) )
		return NONE;
	for ( size_t i = 0; i < point; i++ )
		if ( isdigit( input[i] ) == false)
			return NONE;
	for ( size_t i = point, k = 0; input[i + 1] ; i++, k++ )
	{
		if ( k >= 15 )
			return NONE;
	}
	switch ((input.back() == 'f'))
	{
		case true:
			return FLOAT;
		case false:
			return DOUBLE;
	}
	return NONE;
}

/*
static bool Char( std::string input )
{}

static bool Double( std::string input )
{}*/

/* ************************************************************************** */