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

Point::Point() : _x(0), _y(0), _x_to_pt(0), _y_to_pt(0), _x_to_next(0), _y_to_next(0)
{}

Point::Point( const float x, const float y ) : _x(x), _y(y), _x_to_pt(0), _y_to_pt(0), _x_to_next(0), _y_to_next(0)
{}

Point::Point( Point const & src ) : _x(src.getXValue()), _y(src.getYValue()), _x_to_pt(src.getPointXValue()), _y_to_pt(src.getPointYValue()), _x_to_next(src.getNextXValue()), _y_to_next(src.getNextYValue())
{}

Point::Point( Point const & src, Point const & next, Point const & point) : _x(src.getXValue()), _y(src.getYValue())
{
	setXToPoint( point );
	setYToPoint( point );
	setXToNext( next );
	setYToNext( next );
}

Point::~Point()
{}

Point & Point::operator=( Point const & src )
{
	setXValue(src.getXValue());
	setYValue(src.getYValue());
	return *this;
}

const Fixed & Point::getXValue() const
{
	return _x;
}

const Fixed & Point::getYValue() const
{
	return _y;
}

const Fixed & Point::getPointXValue() const
{
	return _x_to_pt;
}

const Fixed & Point::getPointYValue() const
{
	return _y_to_pt;
}

const Fixed & Point::getNextXValue() const
{
	return _x_to_next;
}

const Fixed & Point::getNextYValue() const
{
	return _y_to_next;
}

void Point::setXValue( int x )
{
	_x.setRawBits(x << Fixed::getFractVal());
}

void Point::setXValue( const float x )
{
	_x.setRawBits(static_cast<int>(roundf(x * 256)));
}

void Point::setXValue( Fixed const & x )
{
	_x.setRawBits(x.getRawBits());
}

void Point::setYValue( int y )
{
	_y.setRawBits(y << Fixed::getFractVal());
}

void Point::setYValue( const float y )
{
	_y.setRawBits(static_cast<int>(roundf(y * 256)));
}

void Point::setYValue( Fixed const & y )
{
	_y.setRawBits(y.getRawBits());
}

void Point::setXToPoint( Point const & point )
{
	_x_to_pt = point.getXValue() - getXValue();
}

void Point::setYToPoint( Point const & point )
{
	_y_to_pt = point.getYValue() - getYValue();
}

void Point::setXToNext( Point const & next_x )
{
	_x_to_next = next_x.getXValue() - getXValue();
}

void Point::setYToNext( Point const & next_y )
{
	_y_to_next = next_y.getYValue() - getYValue();
}

float Point::crossProduct( Point const & vertex )
{
	float topcross = vertex.getNextXValue().toFloat() * vertex.getPointYValue().toFloat();
	float lowcross = vertex.getNextYValue().toFloat() * vertex.getPointXValue().toFloat();

	return topcross - lowcross;
}
