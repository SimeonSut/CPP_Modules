/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/08 18:44:22 by marvin            #+#    #+#             */
/*   Updated: 2026/11/08 19:27:45 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base::~Base()
{
	if (DEBUG)
		std::cout << "Destructor called" << std::endl;
}

Base * generate(void)
{
	int	random = rand() % 101;

	if (random >= 0 && random <= 33)
	{
		if (DEBUG)
			std::cout << "its A" << std::endl;
		return new A();
	}
	if (random >= 34 && random <= 66)
	{
		if (DEBUG)
			std::cout << "its B" << std::endl;
		return new B();
	}
	if (DEBUG)
		std::cout << "its C" << std::endl;
	return new C();
}

void identify(Base* p)
{
	if (DEBUG)
		std::cout << "identify ptr called" << std::endl;
	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
}

void identify(Base& p)
{
	if (DEBUG)
		std::cout << "identify ref called" << std::endl;
	if (DEBUG)
		std::cout << "identify ptr called" << std::endl;
	try
	{
		dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
		return ;
	}
	catch ( ... )
	{}
	try
	{
		dynamic_cast<B&>(p);
		std::cout << "B" << std::endl;
		return ;
	}
	catch ( ... )
	{}
	try
	{
		dynamic_cast<C&>(p);
		std::cout << "C" << std::endl;
		return ;
	}
	catch ( ... )
	{}
}

/* ************************************************************************** */