/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssutarmi <ssutarmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/31 20:27:13 by ssutarmi          #+#    #+#             */
/*   Updated: 2026/11/13 13:18:41 by ssutarmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

PresidentialPardonForm::PresidentialPardonForm() :
AForm( "PresidentialPardonForm", false, PRESIDENT_GRADE_TO_SIGN, PRESIDENT_GRADE_TO_EXEC ),
target("NoTarget")
{
	if (DEBUG)
		std::cout << "PresidentialPardonForm Default Constructor called" << std::endl;

}

PresidentialPardonForm::PresidentialPardonForm( std::string const & target ) :
AForm( "PresidentialPardonForm", false, PRESIDENT_GRADE_TO_SIGN, PRESIDENT_GRADE_TO_EXEC ),
target( target )
{
	if (DEBUG)
		std::cout << "PresidentialPardonForm target parameter Constructor called" << std::endl;
	out_of_range_thrower( getName(), get_grade_to_sign(), get_grade_to_exec() );
}

PresidentialPardonForm::PresidentialPardonForm( PresidentialPardonForm const & src ) :
AForm( "PresidentialPardonForm", false, PRESIDENT_GRADE_TO_SIGN, PRESIDENT_GRADE_TO_EXEC ),
target( src.getName() )
{
	if (DEBUG)
		std::cout << "PresidentialPardonForm Copy Constructor called" << std::endl;
	out_of_range_thrower( getName(), get_grade_to_sign(), get_grade_to_exec() );
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

PresidentialPardonForm::~PresidentialPardonForm()
{
	if (DEBUG)
		std::cout << "PresidentialPardonForm Destructor called" << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

PresidentialPardonForm &	PresidentialPardonForm::operator=( PresidentialPardonForm const & src )
{
	if (DEBUG)
		std::cout << "PresidentialPardonForm assignement called" << std::endl;
	if ( this == &src )
		return *this;
	return *this;
}

std::ostream &				operator<<( std::ostream & outflow, PresidentialPardonForm const & src )
{
	if (DEBUG)
		std::cout << "PresidentialPardonForm outflow overload called" << std::endl;
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

void	PresidentialPardonForm::action() const
{
	if (DEBUG)
		std::cout << "PresidentialPardonForm action called" << std::endl;
	std::cout << getTarget() << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string	PresidentialPardonForm::getTarget() const
{
	if (DEBUG)
		std::cout << "PresidentialPardonForm getTarget called" << std::endl;
	return target;
}

/* ************************************************************************** */