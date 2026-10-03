/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/02 13:42:40 by ssutarmi          #+#    #+#             */
/*   Updated: 2026/10/03 17:30:21 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	PhoneBook::index = 0;
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
	return ;
}

void PhoneBook::search(int index)
{
	if (index < 0 || index > 8)
	{
		std::cout << "Invalid input!" << std::endl;
		return ;
	}
	PhoneBook::Contacts[index].get(index);
}
