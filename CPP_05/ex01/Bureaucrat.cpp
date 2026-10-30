/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssutarmi <ssutarmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 17:30:15 by ssutarmi          #+#    #+#             */
/*   Updated: 2026/10/30 12:37:12 by ssutarmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Bureaucrat::Bureaucrat() : grade(0), name("NoName")
{
	if (DEBUG)
		std::cout << "Bureaucrat Constructor called" << std::endl;
}

Bureaucrat::Bureaucrat( std::string const & newName, short const & newGrade ) : grade(newGrade), name(newName)
{
	if (DEBUG)
		std::cout << "Bureaucrat Constructor with newGrade parameter called" << std::endl;
	out_of_range_thrower( *this, newGrade );
	return ;
}

Bureaucrat::Bureaucrat( const Bureaucrat & src ) : grade(src.getGrade()), name(src.getName())
{
	if (DEBUG)
		std::cout << "Bureaucrat Copy Constructor called" << std::endl;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Bureaucrat::~Bureaucrat()
{
	if (DEBUG)
		std::cout << "Bureaucrat Destructor called" << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Bureaucrat&	Bureaucrat::operator=( Bureaucrat const & src )
{
	if (DEBUG)
		std::cout << "Bureaucrat assignement overload called" << std::endl;
	//name is a constat and is therefore not assigned
	grade = src.getGrade();
	return *this;
}


Bureaucrat&	Bureaucrat::operator++( void )
{
	if (DEBUG)
		std::cout << "Bureaucrat grade pre-incrementation called" << std::endl;
	if (out_of_range_thrower( *this, grade - 1 ) == 1)
		return *this;
	grade--;
	return *this;
}

Bureaucrat	Bureaucrat::operator++( int )
{
	if (DEBUG)
		std::cout << "Bureaucrat grade post-incrementation called" << std::endl;
	if (out_of_range_thrower( *this, grade - 1 ) == 1)
		return *this;
	Bureaucrat tmp(getName(), getGrade());
	grade--;
	return tmp;
}

Bureaucrat&	Bureaucrat::operator--( void )
{
	if (DEBUG)
		std::cout << "Bureaucrat grade pre-decrementation called" << std::endl;
	if (out_of_range_thrower( *this, grade + 1 ) == 1)
		return *this;
	grade++;
	return *this;
}

Bureaucrat	Bureaucrat::operator--( int )
{
	if (DEBUG)
		std::cout << "Bureaucrat grade post-decrementation called" << std::endl;
	Bureaucrat tmp(getName(), getGrade());
	if (out_of_range_thrower( *this, grade + 1 ) == 1)
		return *this;
	grade++;
	return tmp;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

int	Bureaucrat::out_of_range_thrower( Bureaucrat const & src, short grade )
{
	if (DEBUG)
		std::cout << "Form's out_of_range checker function called" << std::endl;
	if (grade > 150)
	{
		GradeTooLowException( src.getName() );
		return 1;
	}
	else if (grade < 0)
	{
		GradeTooHighException( src.getName() );
		return 1;
	}
	return 0;
}

void Bureaucrat::GradeTooHighException( std::string name )
{
	throw std::out_of_range( name + " Form's grade is too high!" );
}

void Bureaucrat::GradeTooLowException( std::string name )
{
	throw std::out_of_range( name + " Form's grade is too low!" );
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

short Bureaucrat::getGrade() const
{
	if (DEBUG)
		std::cout << "getGrade called" << std::endl;
	return grade;
}

std::string const & Bureaucrat::getName() const
{
	if (DEBUG)
		std::cout << "getName called" << std::endl;
	return name;
}

/*
** --------------------------------- FLOWSTREAM OVERLOAD ---------------------------------
*/

std::ostream & operator<<( std::ostream & flowstream, Bureaucrat const & src )
{
	if (DEBUG)
		std::cout << " called" << std::endl;
	flowstream << src.getName() << ", bureaucrat grade " << src.getGrade();
	return flowstream;
}
