/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssutarmi <ssutarmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/31 20:27:11 by ssutarmi          #+#    #+#             */
/*   Updated: 2026/11/13 12:46:48 by ssutarmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

RobotomyRequestForm::RobotomyRequestForm() :
AForm("RobotomyRequestForm", false, ROBOT_GRADE_TO_SIGN, ROBOT_GRADE_TO_EXEC ),
target("NoTarget")
{
	if (DEBUG)
		std::cout << "RobotomyRequestForm Default Constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm( std::string const & target ) :
AForm("RobotomyRequestForm", false, ROBOT_GRADE_TO_SIGN, ROBOT_GRADE_TO_EXEC ),
target(target)
{
	if (DEBUG)
		std::cout << "RobotomyRequestForm target parameter Constructor called" << std::endl;
	out_of_range_thrower( getName(), get_grade_to_sign(), get_grade_to_exec() );
}

RobotomyRequestForm::RobotomyRequestForm( RobotomyRequestForm const & src ) :
AForm("RobotomyRequestForm", false, ROBOT_GRADE_TO_SIGN, ROBOT_GRADE_TO_EXEC ),
target( src.getTarget() )
{
	if (DEBUG)
		std::cout << "RobotomyRequestForm Copy Constructor called" << std::endl;
	out_of_range_thrower( getName(), get_grade_to_sign(), get_grade_to_exec() );
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

RobotomyRequestForm::~RobotomyRequestForm()
{
	if (DEBUG)
		std::cout << "RobotomyRequestForm Destructor called" << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

RobotomyRequestForm &				RobotomyRequestForm::operator=( RobotomyRequestForm const & src )
{
	if (DEBUG)
		std::cout << "RobotomyRequestForm assignement called" << std::endl;
	if ( this == &src )
		return *this;
	return *this;
}

std::ostream &			operator<<( std::ostream & outflow, RobotomyRequestForm const & src )
{
	if (DEBUG)
		std::cout << "RobotomyRequestForm outflow overload called" << std::endl;
	outflow	<< src.getName() << " Form with target " << src.getTarget() 
			<< " has the following values :\n\n\t\t\t\t\t"
			<< "grade_to_signe is : " << src.get_grade_to_sign() << "\n\t\t\t\t\t"
			<< "grade_to_exec is : " << src.get_grade_to_exec() << "\n\t\t\t\t\t"
			<< "currently, this Form is ";
	if (src.get_is_signed() == true)
		outflow << "signed\n";
	else
		outflow << "not signed\n";
	return outflow;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void	RobotomyRequestForm::execute() const
{
	static long long random_bla = 0;
	if (DEBUG)
		std::cout << "RobotomyRequestForm action called" << std::endl;
	std::cout << "DRRRRRRRRRRRRRRRRRRRRRRRR\n";
	usleep(1000000);
	std::cout << "DRRRRRRRRRRRRRRRRRRRRRRRR\n";
	usleep(1000000);
	std::cout << "DRRRRRRRRRRRRRRRRRRRRRRRR\n";
	usleep(1000000);
	if (random_bla % 2 != 0)
		std::cout << getTarget() << " has been robotomized successfully" << std::endl;
	else
		std::cout << getTarget() << " has been robotomized unsuccessfully" << std::endl;
	random_bla++;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string	RobotomyRequestForm::getTarget() const
{
	if (DEBUG)
		std::cout << "RobotomyRequestForm getTarget called" << std::endl;
	return target;
}

/* ************************************************************************** */