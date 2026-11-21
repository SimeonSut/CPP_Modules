/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssutarmi <ssutarmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/16 18:37:24 by ssutarmi          #+#    #+#             */
/*   Updated: 2026/11/17 22:15:19 by ssutarmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int	main(void)
{
	std::vector<int> 					v;
	std::deque<int> 					d;
	std::list<int> 						l;

	v.resize(5);
	d.resize(5);
	l.resize(5);

	std::list<int>::iterator			il = l.begin();

	for (short i = 0, j = 10; i < 4; i++, il++)
	{
		v[i] = j;
		d[i] = j;
		*il = j;
		j += 10;
	}
	try
	{
		std::cout << "\nVector tests with 30 :\n\n\t\t";
		easyfind<std::vector<int> >( v, 30 );

		std::cout << "\nDeque tests with 30 :\n\n\t\t";
		easyfind<std::deque<int> >( d, 30 );

		std::cout << "\nList tests with 30 :\n\n\t\t";
		easyfind<std::list<int> >( l, 30 );

		std::cout << "\nList tests with 60 :\n\n\t\t";
		easyfind<std::list<int> >( l, 60 );
	}
	catch ( std::invalid_argument & not_found )
	{
		std::cout << not_found.what();
	}
	std::cout << std::endl;
	return 0;
}
