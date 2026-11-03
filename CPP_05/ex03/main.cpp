/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 17:30:12 by ssutarmi          #+#    #+#             */
/*   Updated: 2026/11/03 14:37:31 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

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
	usleep(1000000);
	std::cout << "\n\n\n---------------ShrubberyCreationForm FORM TESTS------------------------------\n\n\n";
	usleep(1000000);
	ShrubberyCreationForm	Tree("output.txt");
	Bureaucrat				Shrub_sign_valid_John("Valid to sign John", 145);
	Bureaucrat				Shrub_sign_invalid_John("Invalid to sign John", 146);
	Bureaucrat				Shrub_exec_valid_John("Valid to exec John", 137);
	Bureaucrat				Shrub_exec_invalid_John("Invalid to exec John", 138);

	John.executeForm( Tree );
	Bob.executeForm( Tree );
	Shrub_sign_invalid_John.signForm( Tree );
	Shrub_sign_valid_John.signForm( Tree );
	John.signForm( Tree );
	Bob.signForm( Tree );
	John.executeForm( Tree );
	Bob.executeForm( Tree );
	Shrub_exec_invalid_John.executeForm( Tree );
	Shrub_exec_valid_John.executeForm( Tree );
	usleep(1000000);
	std::cout << "\n\n\n---------------RobotomyRequestForm FORM TESTS------------------------------\n\n\n";
	usleep(1000000);
	RobotomyRequestForm	operation("Bill");
	Bureaucrat				Robot_sign_valid_John("Valid to sign John", 72);
	Bureaucrat				Robot_sign_invalid_John("Invalid to sign John", 73);
	Bureaucrat				Robot_exec_valid_John("Valid to exec John", 45);
	Bureaucrat				Robot_exec_invalid_John("Invalid to exec John", 46);

	John.executeForm( operation );
	Bob.executeForm( operation );
	Robot_sign_invalid_John.signForm( operation );
	Robot_sign_valid_John.signForm( operation );
	John.signForm( operation );
	Bob.signForm( operation );
	Robot_exec_invalid_John.executeForm( operation );
	Robot_exec_valid_John.executeForm( operation );
	John.executeForm( operation );
	Bob.executeForm( operation );
	Bob.executeForm( operation );
	Bob.executeForm( operation );
	Bob.executeForm( operation );
	Bob.executeForm( operation );
	Bob.executeForm( operation );
	Bob.executeForm( operation );
	Bob.executeForm( operation );
	Bob.executeForm( operation );
	Bob.executeForm( operation );
	usleep(1000000);
	std::cout << "\n\n\n---------------PresidentialPardonForm FORM TESTS------------------------------\n\n\n";
	usleep(1000000);
	PresidentialPardonForm	pardon("Harl Filter");
	Bureaucrat				President_sign_valid_John("Valid to sign John", 25);
	Bureaucrat				President_sign_invalid_John("Invalid to sign John", 26);
	Bureaucrat				President_exec_valid_John("Valid to exec John", 5);
	Bureaucrat				President_exec_invalid_John("Invalid to exec John", 6);

	John.executeForm( pardon );
	Bob.executeForm( pardon );
	President_sign_invalid_John.signForm( pardon );
	President_sign_valid_John.signForm( pardon );
	Bob.signForm( pardon );
	John.executeForm( pardon );
	President_exec_invalid_John.executeForm( pardon );
	President_exec_valid_John.executeForm( pardon );
	Bob.executeForm( pardon );
	usleep(1000000);
	std::cout << "\n\n\n---------------INTERN TESTS------------------------------\n\n\n";
	usleep(1000000);
	Intern	newHire;
	AForm	*test;

	test = newHire.makeForm("shrubbery creation request", "testfile.txt");
	Shrub_sign_invalid_John.signForm( *test );
	Shrub_sign_valid_John.signForm( *test );
	Shrub_exec_invalid_John.executeForm( *test );
	Shrub_exec_valid_John.executeForm( *test );
	test = newHire.makeForm("robotomy request", "Jack");
	Robot_sign_invalid_John.signForm( *test );
	Robot_sign_valid_John.signForm( *test );
	Robot_exec_invalid_John.executeForm( *test );
	Robot_exec_valid_John.executeForm( *test );
	Robot_exec_valid_John.executeForm( *test );
	Robot_exec_valid_John.executeForm( *test );
	Robot_exec_valid_John.executeForm( *test );
	test = newHire.makeForm("presidential pardon request", "testfile.txt");
	President_sign_invalid_John.signForm( *test );
	President_sign_valid_John.signForm( *test );
	President_exec_invalid_John.executeForm( *test );
	President_exec_valid_John.executeForm( *test );
	try
	{
		test = newHire.makeForm("asdfasdf", "dasfsd");
	}
	catch ( std::exception & e)
	{}
	return 0;
}
