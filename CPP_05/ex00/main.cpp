/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssutarmi <ssutarmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 17:30:12 by ssutarmi          #+#    #+#             */
/*   Updated: 2026/11/13 12:16:43 by ssutarmi         ###   ########.fr       */
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
	std::cout << std::endl;
	return 0;
}