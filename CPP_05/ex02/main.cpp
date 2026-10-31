/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssutarmi <ssutarmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 17:30:12 by ssutarmi          #+#    #+#             */
/*   Updated: 2026/10/31 19:01:46 by ssutarmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "unistd.h"

int	main(void)
{
	std::cout << "\n\n\n--------BUREAUCRATS TESTS---------\n\n\n";
	try
	{
		Bureaucrat John("John", MAXIMAL_GRADE - 1);
		Bureaucrat Bob("Bob", MINIMAL_GRADE + 1);
	}
	catch ( std::exception & e )
	{
		std::cout << e.what() << "\n";
	}
	Bureaucrat John("John", MAXIMAL_GRADE);
	Bureaucrat Bob("Bob", MINIMAL_GRADE);
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
		usleep(10000);
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
	std::cout << "\n\n\n---------FORMS TESTS---------\n\n\n";
	usleep(100000);
	return 0;
}
