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
		Point( const float x, const float y );
		Point( Point const & src );
		Point( Point const & src, Point const & next, Point const & point);
		~Point();

		Point & operator=( Point const & src );

		const Fixed & getXValue( void ) const;// access _x
		const Fixed & getYValue( void ) const;// access _y
		const Fixed & getPointXValue( void ) const;// access _x_to_pt;
		const Fixed & getPointYValue( void ) const;// access _y_to_pt;
		const Fixed & getNextXValue( void ) const;// access _x_to_next;
		const Fixed & getNextYValue( void ) const;// access _y_to_next;
	
		void setXValue( int x );
		void setXValue( const float x );
		void setXValue( const Fixed & x );
		void setYValue( int y );
		void setYValue( const float y );
		void setYValue( const Fixed & y );
		void setXToPoint( const Point & point );
		void setYToPoint( const Point & point );
		void setXToNext( const Point & next_x );
		void setYToNext( const Point & next_y );

		static float crossProduct( Point const & vertex );
	private:
		Fixed _x;
		Fixed _y;
		Fixed _x_to_pt;
		Fixed _y_to_pt;
		Fixed _x_to_next;
		Fixed _y_to_next;
};

#endif