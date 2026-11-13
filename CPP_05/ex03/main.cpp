/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssutarmi <ssutarmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 17:30:12 by ssutarmi          #+#    #+#             */
/*   Updated: 2026/11/13 13:06:20 by ssutarmi         ###   ########.fr       */
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
	std::cout << "\n\n\n---------------INTERN TESTS------------------------------\n\n\n";
	usleep(1000000);
	Bureaucrat	John("John", MINIMAL_GRADE);
	Bureaucrat	Bob("Bob", MAXIMAL_GRADE);

	Bureaucrat	Shrub_sign_valid_John("Valid to sign John", 145);
	Bureaucrat	Shrub_sign_invalid_John("Invalid to sign John", 146);
	Bureaucrat	Shrub_exec_valid_John("Valid to exec John", 137);
	Bureaucrat	Shrub_exec_invalid_John("Invalid to exec John", 138);

	Bureaucrat	Robot_sign_valid_John("Valid to sign John", 72);
	Bureaucrat	Robot_sign_invalid_John("Invalid to sign John", 73);
	Bureaucrat	Robot_exec_valid_John("Valid to exec John", 45);
	Bureaucrat	Robot_exec_invalid_John("Invalid to exec John", 46);

	Bureaucrat	President_sign_valid_John("Valid to sign John", 25);
	Bureaucrat	President_sign_invalid_John("Invalid to sign John", 26);
	Bureaucrat	President_exec_valid_John("Valid to exec John", 5);
	Bureaucrat	President_exec_invalid_John("Invalid to exec John", 6);

	Intern		newHire;
	AForm		*test;

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
