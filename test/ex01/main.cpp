/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssutarmi <ssutarmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/02 14:01:06 by ssutarmi          #+#    #+#             */
/*   Updated: 2026/10/06 19:17:20 by ssutarmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

int main(void)
{
	PhoneBook	PhoneBook;
	std::string	input;

	std::cout << "WELCOME TO MY AWESOME PHONEBOOK!" << std::endl;
	std::cout << std::endl << "Commands : ADD, SEARCH, EXIT" << std::endl;
	while (!std::cin.eof())
	{
		std::cout << "Input a command : ";
		std::cin >> input;
		std::cin.ignore(100, '\n');
		std::getline(std::cin, input);
		if (input == "ADD")
			PhoneBook.add();
		else if (input == "SEARCH")
			PhoneBook.search();
		else if (input == "EXIT")
			break ;
		else if (!std::cin.eof())
			std::cout << "invalid command ! " << input << std::endl;
	}
	if (std::cin.eof())
		std::cout << "\nEOF reached! ";
	std::cout << "exit program" << std::endl;
	return 0;
}
