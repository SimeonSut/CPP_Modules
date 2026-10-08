/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssutarmi <ssutarmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/08 14:56:23 by ssutarmi          #+#    #+#             */
/*   Updated: 2026/10/08 21:28:57 by ssutarmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	Harl_Filter(short filter_index)
{
	Harl		say;
	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	std::string	(Harl::*fptr)( std::string );

	fptr = &Harl::complain;
	for (short i = 0; i < 399; i++)
	{
		switch ((i / 100) - filter_index)
		{
			case 0:
				std::cout << (say.*fptr)(levels[(i / 100)]) << "\n";
				break;
			case 1:
				std::cout << (say.*fptr)(levels[(i / 100)]) << "\n";
				break;
			case 2:
				std::cout << (say.*fptr)(levels[(i / 100)]) << "\n";
				break;
			case 3:
				std::cout << (say.*fptr)(levels[(i / 100)]) << "\n";
				break;
			default:
				std::cout << "[ Probably complaining about insignificant problems ]\n";
				break;
		}
	}
}

int main(int argc, char **argv)
{
	Harl	say;
	short	filter_index;

	if (argc != 2)
	{
		std::cout << "Incorrect number of input!" << std::endl;
		return 1;
	}
	filter_index = say.complain_index(argv[1]);
	switch(filter_index)
	{
		case -1:
			return 1;
		default:
			Harl_Filter(filter_index);
	}
	return 0;
}
