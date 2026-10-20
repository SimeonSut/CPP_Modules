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

Point::Point() : _x(0), _y(0), _x_to_pt(0), _y_to_pt(0) 
{}

Point::Point( const float x, const float y ) : _x(y), _y(x), _x_to_pt(0), _y_to_pt(0) 
{}

Point::Point( Point const & src ) : _x(src.getXValue()), _y(src.getYValue()), _x_to_pt(0), _y_to_pt(0) 
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

void Point::setXValue( const int x )
{
	_x.setRawBits(x << _x._fract_value);
}

void Point::setXValue( const float x )
{
	_x.setRawBits(static_cast<int>(roundf(x * 256)));
}

void Point::setXValue( Fixed const & x )
{
	_x.setRawBits(x.getRawBits());
}

void Point::setYValue( const int y )
{
	_y.setRawBits(y << _y._fract_value);
}

void Point::setYValue( const float y )
{
	_y.setRawBits(static_cast<int>(roundf(y * 256)));
}

void Point::setYValue( Fixed const & y )
{
	_y.setRawBits(y.getRawBits());
}

void Point::setXToPoint( Point const & point ) const
{
	_x_to_pt = point.getXValue() - getXValue();
}

void Point::setYToPoint( Point const & point ) const
{
	_y_to_pt = point.getYValue() - getYValue();
}

void Point::setXToNext( Point const & next_x ) const
{
	_x_to_next = next_x.getXValue() - getXValue();
}

void Point::setYToNext( Point const & next_y ) const
{
	_y_to_next = next_y.getYValue() - getYValue();
}

const float crossProduct( Point const & vertex )
{
	float topcross = vertex.getNextXValue().toFloat() * vertex.getPointYValue().toFloat();
	float lowcross = vertex.getNextYValue().toFloat() * vertex.getPointXValue().toFloat();

	return topcross - lowcross;
}
