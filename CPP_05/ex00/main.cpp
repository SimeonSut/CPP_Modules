/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssutarmi <ssutarmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 17:30:12 by ssutarmi          #+#    #+#             */
/*   Updated: 2026/10/29 22:43:57 by ssutarmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main(void)
{
	Bureaucrat John("John", 0);
	Bureaucrat Bob("Bob", 150);

	for ( short i = 0; i < 155; i++ )
	{
		try
		{
			--John;
		}
		catch( std::out_of_range & e )
		{
			std::cout << e.what() << "\n";
		}
		try
		{
			++Bob;
		}
		catch( std::out_of_range & e )
		{
			std::cout << e.what() << "\n";
		}
		std::cout << John << "\n";
		std::cout << Bob << "\n";
	}
	std::cout << std::endl;
	return 0;
}