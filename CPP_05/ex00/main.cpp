/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssutarmi <ssutarmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 17:30:12 by ssutarmi          #+#    #+#             */
/*   Updated: 2026/11/12 20:36:55 by ssutarmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "unistd.h"

int	main(void)
{
	try
	{
		Bureaucrat John("John", 0);
		Bureaucrat Bob("Bob", MINIMAL_GRADE);
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
	std::cout << std::endl;
	return 0;
}