/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssutarmi <ssutarmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 14:21:25 by ssutarmi          #+#    #+#             */
/*   Updated: 2026/10/07 18:37:58 by ssutarmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main(void)
{
	std::string	str = "HI THIS IS BRAIN";
	std::string	*stringPTR = &str;
	std::string &stringREF = str;

	std::cout	<< "adress of str is : " << &str
				<< "\nstringPTR adress is : " << stringPTR
				<< "\nstringREF adress is : " << &stringREF
				<< std::endl;

	std::cout	<< "str is : " << str
				<< "\nstringPTR points to : " << *stringPTR
				<< "\nstringREF points to : " << stringREF
				<< std::endl;
	return 0;
}