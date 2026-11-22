/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/19 13:16:14 by ssutarmi          #+#    #+#             */
/*   Updated: 2026/11/22 23:59:20 by marvin           ###   ########.fr       */
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
	for ( int i = 0; i < 3 ; i++, it++ )
		std::cout << *it << " ";
	std::cout << std::endl;
	std::stack<int> s(mstack);
	return 0;
}