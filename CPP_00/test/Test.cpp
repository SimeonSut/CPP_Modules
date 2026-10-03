/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/03 10:29:33 by marvin            #+#    #+#             */
/*   Updated: 2026/10/03 10:29:33 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Test.hpp"

Test::Test()
{}

Test::~Test()
{}

void Test::set( void )
{
	std::cout << "input the string :" << std::endl;
	std::cin >> this->str;
}

void Test::get( void )
{
	std::cout << "the content is" << std::endl;
	if (this->str.size() > 0)
		std::cout << this->str << std::endl;
	else
		std::cout << "void" << std::endl;
}
