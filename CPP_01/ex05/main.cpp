/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssutarmi <ssutarmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/08 14:56:23 by ssutarmi          #+#    #+#             */
/*   Updated: 2026/10/08 20:03:58 by ssutarmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void)
{
	Harl	say;
	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void	(Harl::*fptr)( std::string );

	fptr = &Harl::complain;
	std::cout << "\n\n------------------HARL------------------\n\n";
	for (short i = 0; i < 399; i++)
		(say.*fptr)(levels[(i / 100)]);
	std::cout << std::endl;
	return 0;
}