/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/11 15:37:29 by marvin            #+#    #+#             */
/*   Updated: 2026/10/11 15:37:29 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed( void ) : _fixed_point_value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( const int integer ) : _fixed_point_value(integer)
{
	std::cout << "Int constructor called" << std::endl;
	this->_fixed_point_value << this->_fract_value;
}

Fixed::Fixed( const float floating )
{
	std::cout << "Float constructor called" << std::endl;
	int	fixed_point = floating * 256;
}

Fixed::Fixed( Fixed const & src) : _fixed_point_value(src._fixed_point_value)
{
	std::cout << "Copy constructor called" << std::endl;
}

Fixed::~Fixed( void )
{
	std::cout << "Destructor called" << std::endl;
}

float Fixed::toFloat( void ) const
{}

int Fixed::toInt( void ) const
{
	return (this->_fixed_point_value / 256);
}

Fixed & Fixed::operator=( Fixed const & src )
{
	std::cout << "Copy assignement operator called" << std::endl;
	this->_fixed_point_value = src.getRawBits();
	return *this;
}

std::ostream	Fixed::operator<<( Fixed const & src)
{
	return src.toInt();
}

int Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return this->_fixed_point_value;
}

void Fixed::setRawBits( int const raw )
{
	this->_fixed_point_value = raw;
}
