/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssutarmi <ssutarmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/31 20:27:13 by ssutarmi          #+#    #+#             */
/*   Updated: 2026/10/31 21:33:03 by ssutarmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

PresidentialPardonForm::PresidentialPardonForm() : name("PresidentialPardonForm"), target("NoName"), is_signed(false)
{}

PresidentialPardonForm::PresidentialPardonForm( std::string const & target ) :	name("PresidentialPardonForm"),
																				target(target),
																				is_signed(is_signed)
{
	out_of_range_thrower( *this, grade_to_sign, grade_to_exec );
}

PresidentialPardonForm::PresidentialPardonForm( PresidentialPardonForm const & src ) :	name("PresidentialPardonForm"),
																						target(src.getName()),
																						is_signed(src.get_is_signed())
{
	out_of_range_thrower( *this, grade_to_sign, grade_to_exec );
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

PresidentialPardonForm::~PresidentialPardonForm()
{}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

PresidentialPardonForm &				PresidentialPardonForm::operator=( PresidentialPardonForm const & src )
{
	is_signed = src.get_is_signed();
	return *this;
}

std::ostream &			operator<<( std::ostream & outflow, PresidentialPardonForm const & src )
{
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
{}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string	PresidentialPardonForm::getName() const
{
	return name;
}

std::string	PresidentialPardonForm::getTarget() const
{
	return target;
}

/* ************************************************************************** */