/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssutarmi <ssutarmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 17:30:12 by ssutarmi          #+#    #+#             */
/*   Updated: 2026/11/13 12:22:24 by ssutarmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "unistd.h"

int	main(void)
{
	std::cout << "\n\n\n------------------------------FORMS TESTS------------------------------\n\n\n";
	usleep(100000);

	Bureaucrat John("John", MINIMAL_GRADE);
	Bureaucrat Bob("Bob", MAXIMAL_GRADE);
	Form A;
	Form B("B", 50, 50);
	Form C("C", 20, 20);
	Form D("D", 80, 80);
	try
	{
		Form E("E", 151, 151);
	}
	catch ( std::exception & e )
	{
		std::cout << e.what() << "\n";
	}
	try
	{
		Form F("F", 0, 0);
	}
	catch ( std::exception & e )
	{
		std::cout << e.what() << "\n";
	}
	std::cout << "\n" << A << "\n" << B << "\n" << C << "\n" << D << std::endl;
	John.signForm(B);
	John.signForm(C);
	John.signForm(D);
	Bob.signForm(B);
	Bob.signForm(C);
	Bob.signForm(D);
	Bob.signForm(B);
	John.signForm(B);
	John.signForm(C);
	John.signForm(D);
	Form E("E", 12, 12);
	std::cout << "\n" << A << "\n" << B << "\n" << C << "\n" << D << E << std::endl;
	A = B = C = D = E;
	std::cout << "------------------------------AFTER ASSIGNATION OF EVERYTHING TO USIGNED FORM------------------------------";
	std::cout << "\n" << A << "\n" << B << "\n" << C << "\n" << D << E << std::endl;
	return 0;
}
