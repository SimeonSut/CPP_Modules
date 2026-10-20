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

Point::Point() : _x(0), _y(0), _x_to_pt(0), y_to_pt(0) 
{}

Point::Point( const float x, const float y ) : _y(x), _x(y), _x_to_pt(0), y_to_pt(0) 
{}

Point::Point( Point const & src ) : _y(src.getYValue()), _x(src.getXValue()), _x_to_pt(0), y_to_pt(0) 
{}

Point::~Point()
{}

Point & operator=( Point const & src )
{
	setXValue(src.getXValue());
	setYValue(src.getYValue());
	return *this;
}

Fixed & Fixed::getXValue() const
{
	return _x;
}

Fixed & Fixed::getYValue() const
{
	return _y;
}

Fixed & getPointXValue() const
{
	return _x_to_pt;
}

Fixed & getPointYValue() const
{
	return _x_to_pt;
}

Fixed & getNextXValue() const
{
	return _x_to_next;
}

Fixed & getNextYValue() const
{
	return _y_to_next;
}

void Fixed::setXValue( const int x )
{
	_x.setRawBits(x << _x._fract_value);
}

void Fixed::setXValue( const float x )
{
	_x.setRawBits(static_cast<int>(roundf(x * 256)));
}

void Fixed::setXValue( Fixed const & x )
{
	_x.setRawBits(x.getRawBits());
}

void Fixed::setYValue( const int y )
{
	_y.setRawBits(y << _y._fract_value);
}

void Fixed::setYValue( const float y )
{
	_y.setRawBits(static_cast<int>(roundf(y * 256)));
}

void Fixed::setYValue( Fixed const & y )
{
	_y.setRawBits(y.getRawBits());
}

void Fixed::setXToPoint( Point const & point )
{
	_x_to_pt = point.getXValue() - getXValue();
}

void Fixed::setYToPoint( Point const & point )
{
	_y_to_pt = point.getYValue() - getYValue();
}

void Fixed::setXToNext( Point const & next_x )
{
	_x_to_next = next_x.getXValue() - getXValue();
}

void Fixed::setYToNext( Point const & next_y )
{
	_y_to_next = next_y.getYValue() - getYValue();
}

const float crossProduct( Point const & vertex )
{
	float topcross = vertex.getNextXValue().toFloat() * vertex.getPointYValue().toFloat();
	float lowcross = vertex.getNextYValue().toFloat() * vertex.getPointXValue().toFloat();

	return topcross - lowcross;
}
