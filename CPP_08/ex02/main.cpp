/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/19 13:16:14 by ssutarmi          #+#    #+#             */
/*   Updated: 2026/11/23 21:05:42 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TESTFLAG
#define TESTFLAG 0
#endif

#include "MutantStack.hpp"

int	main(void)
{
	MutantStack<int> mstack;

	std::cout << "\n-----PUSH 5 and 17-----\n";
	mstack.push(5);
	mstack.push(17);

	std::cout << "top output is : " << mstack.top() << std::endl;
	std::cout << "size output is " << mstack.size() << std::endl;

	std::cout << "\n-----POP-----\n";
	mstack.pop();

	std::cout << "top output is : " << mstack.top() << std::endl;
	std::cout << "size output is " << mstack.size() << std::endl;

	std::cout << "\n-----PUSH 3,5,737 and 0-----\n";
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);

	std::cout << "top output is : " << mstack.top() << std::endl;
	std::cout << "size output is : " << mstack.size() << std::endl;

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();

	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);


	std::cout << "\n\n\n\n---------------TESTS WITH LISTS---------------\n\n\n\n";
	std::list<int> list;

	std::cout << "\n-----PUSH 5 and 17-----\n";
	list.push_back(5);
	list.push_back(17);

	std::cout << "top output is : " << list.back() << std::endl;
	std::cout << "size output is " << list.size() << std::endl;

	std::cout << "\n-----POP-----\n";
	list.pop_back();

	std::cout << "top output is : " << list.back() << std::endl;
	std::cout << "size output is " << list.size() << std::endl;

	std::cout << "\n-----PUSH 3,5,737 and 0-----\n";
	list.push_back(3);
	list.push_back(5);
	list.push_back(737);
	list.push_back(0);

	std::cout << "top output is : " << list.back() << std::endl;
	std::cout << "size output is : " << list.size() << std::endl;

	std::list<int>::iterator lit = list.begin();
	std::list<int>::iterator lite = list.end();

	++lit;
	--lit;
	while (lit != lite)
	{
		std::cout << *lit << std::endl;
		++lit;
	}
	return 0;
}