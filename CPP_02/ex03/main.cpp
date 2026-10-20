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

	if (crossProduct(a) <= 0 || crossProduct(b) <= 0 || crossProduct(c) <= 0)
		return false;
	return true;
}

int main(int argc, char **argv)
{
	std::cout << bsp((2.0f, 3.0f), (5.0f, 5.0f), (2.0f, 7.0f), (4.0f, 4.0f)) << "\n";
	std::cout << bsp((2.0f, 3.0f), (5.0f, 5.0f), (2.0f, 7.0f), (3.0f, 4.0f)) << "\n";
	std::cout << bsp((2.0f, 3.0f), (5.0f, 5.0f), (2.0f, 7.0f), (3.0f, 5.0f)) << "\n";
	std::cout << bsp((2.0f, 3.0f), (5.0f, 5.0f), (2.0f, 7.0f), (3.0f, 6.0f)) << "\n";
	std::cout << bsp((2.0f, 3.0f), (5.0f, 5.0f), (2.0f, 7.0f), (4.9f, 5.0f)) << std::endl;
	return 0;
}