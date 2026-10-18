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
//	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( const int integer )
{
//	std::cout << "Int constructor called" << std::endl;

	_fixed_point_value = integer << _fract_value;
}

Fixed::Fixed( const float floating )
{
//	std::cout << "Float constructor called" << std::endl;
	_fixed_point_value = static_cast<int>(roundf(floating * 256));
}

Fixed::Fixed( Fixed const & src) : _fixed_point_value(src._fixed_point_value)
{
//	std::cout << "Copy constructor called" << std::endl;
}

Fixed::~Fixed( void )
{
//	std::cout << "Destructor called" << std::endl;
}

float Fixed::toFloat( void ) const
{
//	std::cout << "in toFloat value is : "<< _fixed_point_value << std::endl;
	return (static_cast<float>(_fixed_point_value) / 256);
}

int Fixed::toInt( void ) const
{
	return (_fixed_point_value >> _fract_value);
}

Fixed & Fixed::operator=( Fixed const & src )
{
//	std::cout << "Copy assignement operator called" << std::endl;
	_fixed_point_value = src.getRawBits();
	return *this;
}

//----------COMPARISON OPERATORS FUNCTIONS OVERLOADS----------

bool	Fixed::operator>( Fixed const & src )
{
	return _fixed_point_value > src.getRawBits();
}

bool	Fixed::operator<( Fixed const & src )
{
	return _fixed_point_value < src.getRawBits();
}

bool	Fixed::operator>=( Fixed const & src )
{
	return _fixed_point_value >= src.getRawBits();
}

bool	Fixed::operator<=( Fixed const & src )
{
	return _fixed_point_value <= src.getRawBits();
}

bool	Fixed::operator==( Fixed const & src )
{
	return _fixed_point_value == src.getRawBits();
}

bool	Fixed::operator!=( Fixed const & src )
{
	return _fixed_point_value != src.getRawBits();
}

//----------ARITHMETIC OPERATORS FUNCTIONS OVERLOADS----------

Fixed & Fixed::operator+( Fixed const & src )
{
	_fixed_point_value += src.getRawBits();
	return *this;
}

Fixed & Fixed::operator-( Fixed const & src )
{
	_fixed_point_value -= src.getRawBits();
	return *this;
}

Fixed & Fixed::operator*( Fixed const & src )
{
//	std::cout << "left is : " << _fixed_point_value << "\n and right is : " << src.toFloat() << std::endl;
	_fixed_point_value *= src.toFloat();
	return *this;
}

Fixed & Fixed::operator/( Fixed const & src )
{
	_fixed_point_value /= src.toFloat();
	return *this;
}

//----------INCREMENTATION OPERATORS FUNCTIONS OVERLOADS----------

Fixed &	Fixed::operator++( void )
{
	_fixed_point_value++;
	return *this;
}

Fixed 	Fixed::operator++( int )
{
	Fixed temp(toFloat());

	_fixed_point_value++;
	return temp;
}

Fixed &	Fixed::operator--( void )
{
	_fixed_point_value--;
	return *this;
}

Fixed	Fixed::operator--( int )
{
	Fixed temp(getRawBits());

	_fixed_point_value--;
	return temp;
}

//----------OUTPUT STREAM OPERATOR FUNCTION OVERLOAD----------

std::ostream & operator<<( std::ostream &flowstream, Fixed const & src)
{
//	std::cout << "raw value is : " << src.getRawBits() << std::endl;
	flowstream << src.toFloat();
	return flowstream;
}

//----------MIN/MAX CHECK AND RETURN REFERENCES FUNCTIONS----------

Fixed & Fixed::min(Fixed & one, Fixed & two)
{
	if (one.getRawBits() >  two.getRawBits())
		return two;
	return one;
}

const Fixed & Fixed::min(Fixed const & one, Fixed const & two)
{
	if (one.getRawBits() >  two.getRawBits())
		return two;
	return one;
}

Fixed & Fixed::max(Fixed & one, Fixed & two)
{
	if (one.getRawBits() < two.getRawBits())
		return two;
	return one;
}

const Fixed & Fixed::max(Fixed const & one, Fixed const & two)
{
	if (one.getRawBits() < two.getRawBits())
		return two;
	return one;
}

//----------ACCESSORS AND MODIFIERS----------

int Fixed::getRawBits( void ) const
{
//	std::cout << "getRawBits member function called" << std::endl;
	return _fixed_point_value;
}

void Fixed::setRawBits( int const raw )
{
	_fixed_point_value = raw;
}
