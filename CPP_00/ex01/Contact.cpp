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

void Contact::get(int index)
{
	std::string	output;

	if (this->data[FIRST_NAME].size() == 0)
	{
		std::cout << "Contact not added yet, try another index!" << std::endl;
		return ;
	}
	std::cout << std::setw(10) << index << "|";
	display(this->data[FIRST_NAME]);
	display(this->data[LAST_NAME]);
	display(this->data[NICKNAME]);
	std::cout << std::endl;
}

int Contact::set(void)
{
	std::cout << "input first name : ";
	std::cin >> this->data[FIRST_NAME];
	if (this->data[FIRST_NAME].size() == 0)
		return 1;
	std::cout << "input last name : ";
	std::cin >> this->data[LAST_NAME];
	if (this->data[LAST_NAME].size() == 0)
		return 1;
	std::cout << "input nickname : ";
	std::cin >> this->data[NICKNAME];
	if (this->data[NICKNAME].size() == 0)
		return 1;
	std::cout << "input phone number : ";
	std::cin >> this->data[PHONE_NUMBER];
	if (this->data[PHONE_NUMBER].size() == 0)
		return 1;
	std::cout << "input darkest_secret : ";
	std::cin >> this->data[DARKEST_SECRET];
	if (this->data[DARKEST_SECRET].size() == 0)
		return 1;
	return 0;
}
