/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssutarmi <ssutarmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 17:30:12 by ssutarmi          #+#    #+#             */
/*   Updated: 2026/10/30 23:32:50 by ssutarmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "unistd.h"

int	main(void)
{
	try
	{
		Bureaucrat John("John", MAXIMAL_GRADE - 1);
		Bureaucrat Bob("Bob", MINIMAL_GRADE + 1);
	}
	catch ( std::exception & e )
	{
		std::cout << e.what() << "\n";
	}
	Bureaucrat John("John", MAXIMAL_GRADE - 1);
	Bureaucrat Bob("Bob", MINIMAL_GRADE + 1);
	for ( short i = 0; i < 155; i++ )
	{
		try
		{
			--John;
		}
		catch( std::exception & e )
		{
			std::cout << e.what() << "\n";
		}
		usleep(50000);
		try
		{
			++Bob;
		}
		catch( std::exception & e )
		{
			std::cout << e.what() << "\n";
		}
		std::cout << John << "\n";
		std::cout << Bob << "\n";
	}
	usleep(100000);
	std::cout << "\n\n\n---------FORM TESTS---------\n\n\n";
	usleep(100000);
	return 0;
}
