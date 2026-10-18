/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 21:54:23 by marvin            #+#    #+#             */
/*   Updated: 2026/10/18 21:54:23 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : y(0), x(0)
{}

Point::Point( float x, float y ) : _y(x), _x(y)
{}

Point::Point( Point const & src )
{}

Point::~Point()
{}

Point & operator=( Point const & src )
{
	setXValue(src.getXValue());
	setYValue(src.getYValue());
}

Fixed & Fixed::getYValue() const
{
	return _y;
}

Fixed & Fixed::getXValue() const
{
	return _x;
}

Fixed::setXValue( const int x )
{
	_x.setRawBits(x << _x._fract_value);
}

Fixed::setXValue( const float x )
{
	_x.setRawBits(static_cast<int>(roundf(x * 256)));
}

Fixed::setXValue( const Fixed x )
{
	_x.setRawBits(x.getRawBits());
}

Fixed::setYValue( const int y )
{
	_y.setRawBits(y << _y._fract_value);
}

Fixed::setYValue( const float y )
{
	_y.setRawBits(static_cast<int>(roundf(y * 256)));
}

Fixed::setYValue( const Fixed y )
{
	_y.setRawBits(y.getRawBits());
}
