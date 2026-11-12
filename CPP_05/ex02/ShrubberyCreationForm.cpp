/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssutarmi <ssutarmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/31 20:27:08 by ssutarmi          #+#    #+#             */
/*   Updated: 2026/11/12 21:16:31 by ssutarmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ShrubberyCreationForm::ShrubberyCreationForm() :
AForm( "ShrubberyCreationForm", false, SCHRUB_GRADE_TO_SIGN, SCHRUB_GRADE_TO_EXEC ),
target( "NoTarget" )
{
	if (DEBUG)
		std::cout << "ShrubberyCreationForm Default Constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm( std::string const target ) :
AForm( "ShrubberyCreationForm", false, SCHRUB_GRADE_TO_SIGN, SCHRUB_GRADE_TO_EXEC ),
target( target )
{
	if (DEBUG)
	{
		std::cout << "ShrubberyCreationForm target assignment Constructor called" << std::endl;
		std::cout << "grade to sign is : " << get_grade_to_sign() << "\n";
		std::cout << "grade to exec is : " << get_grade_to_exec() << "\n";
	}
	out_of_range_thrower( getName(), get_grade_to_sign(), get_grade_to_exec() );
}

ShrubberyCreationForm::ShrubberyCreationForm( ShrubberyCreationForm const & src ) :
AForm( "ShrubberyCreationForm", src.get_is_signed(), SCHRUB_GRADE_TO_SIGN, SCHRUB_GRADE_TO_EXEC ),
target( src.getTarget() )
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
	if ( this == &src )
		return *this;
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

std::string	ShrubberyCreationForm::getTarget() const
{
	if (DEBUG)
		std::cout << "ShrubberyCreationForm getTarget called" << std::endl;
	return target;
}

/* ************************************************************************** */