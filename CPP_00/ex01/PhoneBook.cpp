/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssutarmi <ssutarmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/02 13:42:40 by ssutarmi          #+#    #+#             */
/*   Updated: 2026/10/02 21:54:29 by ssutarmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{}

PhoneBook::~PhoneBook(void)
{}

Contact::Contact(void)
{
	std::cout << "input first name" << std::endl;
	std::cin >> this->first_name;
	std::cout << "input last name" << std::endl;
    std::cin >> this->last_name;
    std::cout << "input nickname" << std::endl;
    std::cin >> this->nickname;
	std::cout << "input phone number" << std::endl;
    std::cin >> this->phone_number;
    std::cout << "input darkest_secret" << std::endl;
    std::cin >> this->darkest_secret;
}

Contact::~Contact(void)
{}
