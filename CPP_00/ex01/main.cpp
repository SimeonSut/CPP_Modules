/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssutarmi <ssutarmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/02 14:01:06 by ssutarmi          #+#    #+#             */
/*   Updated: 2026/10/02 21:05:07 by ssutarmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(void)
{
	std::string	input;

	while (1)
	{
		std::cin >> input;
		if (input.compare("ADD") == 0)
			std::cout << "its ADD!!" << std::endl;
		else if (input.compare("SEARCH") == 0)
			std::cout << "its SEARCH!!" << std::endl;
		else if (input.compare("EXIT") == 0)
		{
			std::cout << "its EXIT!!" << std::endl;
			break ;
		}
		else
			continue ;
	}
	return 0;
}