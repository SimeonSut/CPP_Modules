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
		~Point();

		Point & operator=( Point const & src );

		Fixed & getYValue( void ) const;
		Fixed & getXValue( void ) const;
		Fixed & getPointXValue( void ) const;
		Fixed & getPointYValue( void ) const;
		Fixed & getNextXValue( void ) const;
		Fixed & getNextYValue( void ) const;
	
		void setXValue( const int x );
		void setXValue( const float x );
		void setXValue( const Fixed & x );
		void setYValue( const int y );
		void setYValue( const float y );
		void setYValue( const Fixed & y );
		void setXToPoint( const Point & point ) const;
		void setYToPoint( const Point & point ) const;
		void setXToNext( const Point & next_x ) const;
		void setYToNext( const Point & next_y ) const;

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