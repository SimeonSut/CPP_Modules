/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 21:54:25 by marvin            #+#    #+#             */
/*   Updated: 2026/10/18 21:54:25 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point
{
	public:
		Point( void );
		Point( float x, float y );
		Point( Point const & src);
		~Point();

		Point & operator=( Point const & src);

		Fixed & getYValue() const;
		Fixed & getXValue() const;
		setXValue( const int x );
		setXValue( const float x);
		setXValue( const Fixed x );
		setYValue( const int y );
		setYValue( const float y);
		setYValue( const Fixed y );
	private:
		Fixed _y;
		Fixed _x;
};

#endif POINT_HPP