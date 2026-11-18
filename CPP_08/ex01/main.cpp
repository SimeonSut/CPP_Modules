/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssutarmi <ssutarmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/17 22:00:30 by ssutarmi          #+#    #+#             */
/*   Updated: 2026/11/18 17:03:41 by ssutarmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main(void)
{
	Span subject_sp = Span(5);

	subject_sp.addNumber(6);
	subject_sp.addNumber(3);
	subject_sp.addNumber(17);
	subject_sp.addNumber(9);
	subject_sp.addNumber(11);

	std::cout << subject_sp.shortestSpan() << std::endl;
	std::cout << subject_sp.longestSpan() << std::endl;

	std::cout << "\n\n--------------Span calculations with negatives tests!--------------\n\n";
	Span sp = Span(110);

	for ( int i = -10; i <= 99; i++ )
	{
		if ( (i >= 90 && i <= 94) || (i > 95 && i <= 99) )
			sp.addNumber(-5);
		else if ( i == 95 )
			sp.addNumber(-100);
		else
			sp.addNumber(i);
	}

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	std::cout << sp;

	std::cout << "\n\n--------------multiple additions at once tests!--------------\n\n";

	return 0;
}