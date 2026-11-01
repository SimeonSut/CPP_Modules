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

ShrubberyCreationForm*	makeShrub( std::string & FormTarget )
{
	return new ShrubberyCreationForm( FormTarget );
}

RobotomyRequestForm*	makeRobot( std::string & FormTarget )
{
	return new RobotomyRequestForm( FormTarget );
}

PresidentialPardonForm*	makePresident( std::string & FormTarget )
{
	return new PresidentialPardonForm( FormTarget );
}

AForm*	Intern::makeForm( std::string & FormName, std::string & FormTarget ) const
{
	std::string	requests[3] = {"shrubbery creation request", "robotomy request", "presidential pardon request"};
	AForm	*(Intern::*forms[3])( std::string & ) = {&Intern::makeShrub, &Intern::makeRobot, &Intern::makePresident};
	AForm	*NewForm;

	for(short i = 0; i < 3; i++)
	{
		switch (FormName.compare(requests[i]))
		{
			case 0:
				return (*forms[i])(FormTarget);
			default:
				continue ;
		}
	}
	std::cout << "Incorrect input, try another request\n";
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

/* ************************************************************************** */