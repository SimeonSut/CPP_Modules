/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 14:00:05 by marvin            #+#    #+#             */
/*   Updated: 2026/11/03 14:37:45 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Intern::Intern()
{
	if (DEBUG)
		std::cout << "Intern Default Constructor called" << std::endl;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Intern::~Intern()
{
	if (DEBUG)
		std::cout << "Intern Destructor called" << std::endl;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

AForm*	Intern::makeShrub( std::string & FormTarget ) const
{
	return new ShrubberyCreationForm( FormTarget );
}

AForm*	Intern::makeRobot( std::string & FormTarget ) const
{
	return new RobotomyRequestForm( FormTarget );
}

AForm*	Intern::makePresident( std::string & FormTarget ) const
{
	return new PresidentialPardonForm( FormTarget );
}

AForm*	Intern::makeForm( std::string FormName, std::string FormTarget ) const
{
	std::string	requests[3] = {"shrubbery creation request", "robotomy request", "presidential pardon request"};
	AForm*	(Intern::*forms[3])( std::string & ) const = {&Intern::makeShrub, &Intern::makeRobot, &Intern::makePresident};

	for(short i = 0; i < 3; i++)
	{
		switch (FormName.compare(requests[i]))
		{
			case 0:
				return (this->*forms[i])(FormTarget);
			default:
				continue ;
		}
	}
	std::cout << "Incorrect input, try another request\n";
	throw std::exception();
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

/* ************************************************************************** */