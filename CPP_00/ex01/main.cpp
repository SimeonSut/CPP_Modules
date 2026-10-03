/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/02 14:01:06 by ssutarmi          #+#    #+#             */
/*   Updated: 2026/10/03 16:56:52 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(void)
{
	PhoneBook	PhoneBook;
	std::string	input;
	int			index;

	std::cout << "WELCOME TO MY AWESOME PHONEBOOK!" << std::endl;
	std::cout << std::endl << "Commands : ADD, SEARCH, EXIT" << std::endl;
	while (1)
	{
		std::cout << "Input a command : ";
		std::cin >> input;
		if (input.compare("ADD") == 0)
			PhoneBook.add();
		else if (input.compare("SEARCH") == 0)
		{
			std::cout << "Insert the index you want to consult :";
			std::cin >> index;
			PhoneBook.search(index);
		}
		else if (input.compare("EXIT") == 0)
			break ;
		else
			std::cout << "invalid command : " << input << std::endl;
		continue ;
	}
	std::cout << "EXITING THE PROGRAMM" << std::endl;
	return 0;
}
