/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 21:54:30 by marvin            #+#    #+#             */
/*   Updated: 2026/10/18 21:54:30 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point )
{
	a.setXToPoint( point );
	a.setYToPoint( point );
	a.setXToNext( b );
	a.setYToNext( b );

	b.setXToPoint( point );
	b.setYToPoint( point );
	b.setXToNext( c );
	b.setYToNext( c );

	c.setXToPoint( point );
	c.setYToPoint( point );
	c.setXToNext( a );
	c.setYToNext( a );

	if (Point::crossProduct(a) <= 0 || Point::crossProduct(b) <= 0 || Point::crossProduct(c) <= 0)
		return false;
	return true;
}

int main( void )
{
	Point a(2.0f, 3.0f);
	Point b(5.0f, 5.0f);
	Point c(2.0f, 7.0f);
	Point pt1(4.0f, 4.0f);
	Point pt2(3.0f, 5.0f);
	Point pt3(3.0f, 6.0f);
	Point pt4(4.9f, 5.0f);
	Point pt5(90.9f, 100.0f);

	std::cout << bsp(a, b, c, pt5) << "\n";
	std::cout << bsp(a, b, c, pt1) << "\n";
	std::cout << bsp(a, b, c, pt2) << "\n";
	std::cout << bsp(a, b, c, pt3) << "\n";
	std::cout << bsp(a, b, c, pt4) << "\n";
	std::cout << std::endl;
	return 0;
}