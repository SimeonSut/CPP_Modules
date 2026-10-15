/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/03 13:26:32 by marvin            #+#    #+#             */
/*   Updated: 2026/10/03 13:26:32 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

Contact::Contact(void)
{}

Contact::~Contact(void)
{}

void display(std::string str)
{
	std::string	output;

	if (str.size() > 10)
	{
		output = str.substr(0, 9);
		output.append(".");
	}
	else
		output = str;
	std::cout << std::setw(10) << output << "|";
}

void Contact::get(int index) const
{
	std::string	output;

	if (data[FIRST_NAME].size() == 0)
	{
		std::cout << "Contact not added yet, try another index!" << std::endl;
		return ;
	}
	std::cout << std::setw(10) << index << "|";
	display(data[FIRST_NAME]);
	display(data[LAST_NAME]);
	display(data[NICKNAME]);
	std::cout << std::endl;
}

int Contact::set(void)
{
	std::cout << "input first name : ";
	getline(std::cin, data[FIRST_NAME]);
	if (data[FIRST_NAME].size() == 0)
		return 1;
	std::cout << "input last name : ";
	getline(std::cin, data[LAST_NAME]);
	if (data[LAST_NAME].size() == 0)
		return 1;
	std::cout << "input nickname : ";
	getline(std::cin, data[NICKNAME]);
	if (data[NICKNAME].size() == 0)
		return 1;
	std::cout << "input phone number : ";
	getline(std::cin, data[PHONE_NUMBER]);
	if (data[PHONE_NUMBER].size() == 0)
		return 1;
	std::cout << "input darkest_secret : ";
	getline(std::cin, data[DARKEST_SECRET]);
	if (data[DARKEST_SECRET].size() == 0)
		return 1;
	return 0;
}
