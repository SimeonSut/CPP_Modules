/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssutarmi <ssutarmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 17:30:12 by ssutarmi          #+#    #+#             */
/*   Updated: 2026/10/31 18:49:15 by ssutarmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "unistd.h"

int	main(void)
{
	std::cout << "\n\n\n--------BUREAUCRATS TESTS---------\n\n\n";
	try
	{
		Bureaucrat John("John", MAXIMAL_GRADE - 1);
		Bureaucrat Bob("Bob", MINIMAL_GRADE + 1);
	}
	catch ( std::exception & e )
	{
		std::cout << e.what() << "\n";
	}
	Bureaucrat John("John", MAXIMAL_GRADE);
	Bureaucrat Bob("Bob", MINIMAL_GRADE);
	for ( short i = 0; i < 155; i++ )
	{
		try
		{
			--John;
		}
		catch( std::exception & e )
		{
			std::cout << e.what() << "\n";
		}
		usleep(10000);
		try
		{
			++Bob;
		}
		catch( std::exception & e )
		{
			std::cout << e.what() << "\n";
		}
		std::cout << John << "\n";
		std::cout << Bob << "\n";
	}
	usleep(100000);
	std::cout << "\n\n\n---------FORMS TESTS---------\n\n\n";
	usleep(100000);

	Form A;
	Form B("B", false, 50, 50);
	Form C("C", true, 20, 20);
	Form D("D", false, 80, 80);
	try
	{
		Form E("E", false, 151, 151);
	}
	catch ( std::exception & e )
	{
		std::cout << e.what() << "\n";
	}
	try
	{
		Form F("F", false, 0, 0);
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
	Form E("E", false, 12, 12);
	std::cout << "\n" << A << "\n" << B << "\n" << C << "\n" << D << E << std::endl;
	A = B = C = D = E;
	std::cout << "---------------AFTER ASSIGNATION OF EVERYTHING TO USIGNED FORM------------------------------";
	std::cout << "\n" << A << "\n" << B << "\n" << C << "\n" << D << E << std::endl;
	return 0;
}
