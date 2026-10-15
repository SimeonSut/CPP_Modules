/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssutarmi <ssutarmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/02 13:42:40 by ssutarmi          #+#    #+#             */
/*   Updated: 2026/10/06 19:08:19 by ssutarmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

PhoneBook::PhoneBook(void)
{
	index = 0;
	contacts_count = 0;
}

PhoneBook::~PhoneBook(void)
{}

void PhoneBook::add(void)
{
	Contact	contact;

	if (contact.set() == 1)
		return ;
	if (PhoneBook::index > 8)
		PhoneBook::index = 0;
	PhoneBook::Contacts[PhoneBook::index] = contact;
	PhoneBook::index++;
	PhoneBook::contacts_count++;
	return ;
}

void PhoneBook::search(void)
{
	std::string			input;
	std::stringstream	strm;
	int					index;

	for (int i = 0; i < contacts_count; i++)
	{
		Contacts[i].get(i);
	}
	std::cout << "Insert the index you want to consult : ";
	std::cin >> input;
	std::cin.ignore(1, '\n');
	strm << input;
	if (!(strm >> index) || index < 0 || index > 8)
	{
		std::cout << "Invalid input!" << std::endl;
		return ;
	}
	PhoneBook::Contacts[index].get(index);
}
