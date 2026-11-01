/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/31 20:27:08 by ssutarmi          #+#    #+#             */
/*   Updated: 2026/11/01 20:49:35 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

const short ShrubberyCreationForm::shrub_grade_to_sign;
const short ShrubberyCreationForm::shrub_grade_to_exec;

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ShrubberyCreationForm::ShrubberyCreationForm() :	name("ShrubberyCreationForm"),
													target("NoTarget"),
													is_signed(false)
{
	if (DEBUG)
		std::cout << "ShrubberyCreationForm Default Constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm( std::string const target ) :		AForm( "ShrubberyCreationForm", false, shrub_grade_to_sign, shrub_grade_to_exec ),
																				target(target),
																				is_signed(false)
{
	if (DEBUG)
	{
		std::cout << "ShrubberyCreationForm target assignment Constructor called" << std::endl;
		std::cout << "grade to sign is : " << get_grade_to_sign() << "\n";
		std::cout << "grade to exec is : " << get_grade_to_exec() << "\n";
	}
	out_of_range_thrower( getName(), get_grade_to_sign(), get_grade_to_exec() );
}

ShrubberyCreationForm::ShrubberyCreationForm( ShrubberyCreationForm const & src ) :	AForm( "ShrubberyCreationForm", src.get_is_signed(), shrub_grade_to_sign, shrub_grade_to_exec ),
																					target(src.getTarget()),
																					is_signed(src.get_is_signed())
{
	if (DEBUG)
	{
		std::cout << "ShrubberyCreationForm Copy Constructor called" << std::endl;
		std::cout << "grade to sign is : " << get_grade_to_sign() << "\n";
		std::cout << "grade to exec is : " << get_grade_to_exec() << "\n";
	}
	out_of_range_thrower( getName(), get_grade_to_sign(), get_grade_to_exec() );
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	if (DEBUG)
		std::cout << "ShrubberyCreationForm Destructor called" << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ShrubberyCreationForm &	ShrubberyCreationForm::operator=( ShrubberyCreationForm const & src )
{
	if (DEBUG)
		std::cout << "ShrubberyCreationForm assignement called" << std::endl;
	is_signed = src.get_is_signed();
	return *this;
}

std::ostream &	operator<<( std::ostream & outflow, ShrubberyCreationForm const & src )
{
	if (DEBUG)
		std::cout << "ShrubberyCreationForm outflow overload called" << std::endl;
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
	std::string 	outname = target;
	std::ofstream	outfile;

	if (DEBUG)
		std::cout << "ShrubberyCreationForm action called" << std::endl;
	outname.append("_shrubbery");
	outfile.open(outname.c_str());
	if (outfile.is_open() == false)
	{
		std::cout << "ERROR: shrubbery file opening error !" << std::endl;
		return ;
	}
	for (short i = 10, j = 1; i >= 0; i--, j += 2)
	{
		for (short k = i; k > 0; k--)
		{
			outfile << " ";
		}
		for (short k = j; k > 0; k--)
		{
			outfile << "*";
		}
		outfile << "\n";
	}
	outfile.close();
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string	ShrubberyCreationForm::getName() const
{
	if (DEBUG)
		std::cout << "ShrubberyCreationForm getName called" << std::endl;
	return name;
}

std::string	ShrubberyCreationForm::getTarget() const
{
	if (DEBUG)
		std::cout << "ShrubberyCreationForm getTarget called" << std::endl;
	return target;
}

/* ************************************************************************** */