/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssutarmi <ssutarmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/31 20:27:08 by ssutarmi          #+#    #+#             */
/*   Updated: 2026/10/31 22:07:38 by ssutarmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ShrubberyCreationForm::ShrubberyCreationForm() : name("ShrubberyCreationForm"), target("NoName"), is_signed(false)
{}

ShrubberyCreationForm::ShrubberyCreationForm( std::string const & target ) :	name("ShrubberyCreationForm"),
																				target(target),
																				is_signed(is_signed)
{
	out_of_range_thrower( *this, grade_to_sign, grade_to_exec );
}

ShrubberyCreationForm::ShrubberyCreationForm( ShrubberyCreationForm const & src ) :	name("ShrubberyCreationForm"),
																					target(src.getName()),
																					is_signed(src.get_is_signed())
{
	out_of_range_thrower( *this, grade_to_sign, grade_to_exec );
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ShrubberyCreationForm::~ShrubberyCreationForm()
{}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ShrubberyCreationForm &				ShrubberyCreationForm::operator=( ShrubberyCreationForm const & src )
{
	is_signed = src.get_is_signed();
	return *this;
}

std::ostream &			operator<<( std::ostream & outflow, ShrubberyCreationForm const & src )
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

void	ShrubberyCreationForm::action() const
{
	std::string		ASCII_tree = "";
	std::string 	outname = target;
	std::ofstream	outfile;
	
	outname.append("_shrubbery");
	outfile.open(outname.c_str());
	if (outfile.is_open() == false)
	{
		std::cout << "shrubbery file opening error !" << std::endl;
	}
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string	ShrubberyCreationForm::getName() const
{
	return name;
}

std::string	ShrubberyCreationForm::getTarget() const
{
	return target;
}

/* ************************************************************************** */