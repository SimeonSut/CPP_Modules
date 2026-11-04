/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 15:58:04 by marvin            #+#    #+#             */
/*   Updated: 2026/11/04 19:13:33 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ScalarConverter::ScalarConverter()
{
	if (DEBUG)
		std::cout << "Default Constructor called" << std::endl;
}
/*
ScalarConverter::ScalarConverter( const ScalarConverter & src )
{
	if (DEBUG)
		std::cout << "Copy Constructor called" << std::endl;
}*/

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
	char	*ptr;
	long int result = strtol(literal.c_str(), &ptr, 10);

	if (DEBUG)
		std::cout << "convert member function called" << std::endl;
	std::cout << result << std::endl;
}

/*
** --------------------------------- METHODS ----------------------------------
*/


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */