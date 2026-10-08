/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssutarmi <ssutarmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/08 14:56:24 by ssutarmi          #+#    #+#             */
/*   Updated: 2026/10/08 21:28:38 by ssutarmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl( void )
{}

Harl::~Harl( void )
{}

std::string Harl::complain( std::string level )
{
	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	std::string	(Harl::*fptr[4])( void ) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	for(short i = 0; i < 4; i++)
	{
		switch (level.compare(levels[i]))
		{
			case 0:
				return (this->*fptr[i])();
			default:
				continue ;
		}
	}
	std::cout << "Incorrect input, nice try lmao\n";
	return "[ You really shouldnt try to break the programm like this ]";
}

int Harl::complain_index( std::string level )
{
	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	std::string	verbose[4] = {debug(), info(), warning(), error()};

	for(short i = 0; i < 4; i++)
	{
		switch (level.compare(levels[i]))
		{
			case 0:
				return i;
		}
		switch (level.compare(verbose[i]))
		{
			case 0:
				return i;
		}
	}
	std::cout << "Incorrect input, nice try lmao";
	return -1;
}

std::string Harl::debug( void )
{
	return "Harl complains\n";
}

std::string Harl::info( void )
{
	return "Harl complains with information";
}

std::string Harl::warning( void )
{
	return "Harl complains with threats";
}

std::string Harl::error( void )
{
	return "Harl complains with stutter, you are really wrong this time";
}
