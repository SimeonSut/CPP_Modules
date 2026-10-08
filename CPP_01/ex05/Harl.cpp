/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssutarmi <ssutarmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/08 14:56:24 by ssutarmi          #+#    #+#             */
/*   Updated: 2026/10/08 19:54:54 by ssutarmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl( void )
{}

Harl::~Harl( void )
{}

void Harl::complain( std::string level )
{
	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void	(Harl::*fptr[4])( void ) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	for(short i = 0; i < 4; i++)
	{
		switch (level.compare(levels[i]))
		{
			case 0:
				(this->*fptr[i])();
				return ;
			default:
				continue ;
		}
	}
	std::cout << "Incorrect input, nice try lmao\n";
}

void Harl::debug( void )
{
	std::cout << "Harl complains\n";
}

void Harl::info( void )
{
	std::cout << "Harl complains with information\n";
}

void Harl::warning( void )
{
	std::cout << "Harl complains with threats\n";
}

void Harl::error( void )
{
	std::cout << "Harl complains with stutter, you are really wrong this time\n";
}
