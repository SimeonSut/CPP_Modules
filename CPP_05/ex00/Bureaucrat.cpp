/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssutarmi <ssutarmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 17:30:15 by ssutarmi          #+#    #+#             */
/*   Updated: 2026/10/30 22:17:19 by ssutarmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Bureaucrat::Bureaucrat() : grade(1), name("NoName")
{
	if (DEBUG)
		std::cout << "Bureaucrat Constructor called" << std::endl;
}

Bureaucrat::Bureaucrat( std::string const & newName, short const & newGrade ) : name(newName)
{
	if (DEBUG)
		std::cout << "Bureaucrat Constructor with newGrade parameter called" << std::endl;
	out_of_range_thrower( *this, newGrade );
	grade = newGrade;
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
	grade = src.getGrade();
	return *this;
}


Bureaucrat&	Bureaucrat::operator++( void )
{
	if (DEBUG)
		std::cout << "Bureaucrat grade pre-incrementation called" << std::endl;
	out_of_range_thrower( *this, grade - 1 );
	grade--;
	return *this;
}

Bureaucrat	Bureaucrat::operator++( int )
{
	if (DEBUG)
		std::cout << "Bureaucrat grade post-incrementation called" << std::endl;
	out_of_range_thrower( *this, grade - 1 );
	Bureaucrat tmp(getName(), getGrade());
	grade--;
	return tmp;
}

Bureaucrat&	Bureaucrat::operator--( void )
{
	if (DEBUG)
		std::cout << "Bureaucrat grade pre-decrementation called" << std::endl;
	out_of_range_thrower( *this, grade + 1 );
	grade++;
	return *this;
}

Bureaucrat	Bureaucrat::operator--( int )
{
	if (DEBUG)
		std::cout << "Bureaucrat grade post-decrementation called" << std::endl;
	Bureaucrat tmp(getName(), getGrade());
	out_of_range_thrower( *this, grade + 1 );
	grade++;
	return tmp;
}

std::ostream & operator<<( std::ostream & flowstream, Bureaucrat const & src )
{
	if (DEBUG)
		std::cout << " called" << std::endl;
	flowstream << src.getName() << ", bureaucrat grade " << src.getGrade();
	return flowstream;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void	Bureaucrat::out_of_range_thrower( Bureaucrat const & src, short grade )
{
	if (DEBUG)
		std::cout << "Bureaucrat's out_of_range checker function called" << std::endl;
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException( src.getName() );
	else if (grade < 1)
		throw Bureaucrat::GradeTooHighException( src.getName() );
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
** --------------------------------- EXCEPTION DERIVED CLASSES ---------------------------------
*/

//------------------------------------------HIGH-------------------------------------------------------

Bureaucrat::GradeTooHighException( std::string const & newOne ) : error_name(newOne)
{
	if (DEBUG)
	{
		std::cout << "GradeTooHighException Constructor called" << std::endl;
	}
	error_name.append(" Form's grade is too high!");
	if (DEBUG)
	{
		std::cout << "newName is : " << newOne << std::endl;
		std::cout << "name is : " << error_name << std::endl;
	}
}

Bureaucrat::~GradeTooHighException() throw()
{
	if (DEBUG)
		std::cout << "GradeTooHighException Destructor called" << std::endl;
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	if (DEBUG)
	{
		std::cout << "GradeTooHighException what function overload called\n";
		std::cout << "name of class is : " << error_name;
	}
	return error_name.c_str();;
}

//------------------------------------------LOW-------------------------------------------------------

Bureaucrat::GradeTooLowException( std::string const & newOne ) : error_name(newOne)
{
	if (DEBUG)
	{
		std::cout << "GradeTooLowException Constructor called" << std::endl;
	}
	error_name.append(" Form's grade is too low!");
	if (DEBUG)
	{
		std::cout << "newName is : " << newOne << std::endl;
		std::cout << "name is : " << error_name << std::endl;
	}
}

Bureaucrat::~GradeTooLowException() throw()
{
	if (DEBUG)
		std::cout << "GradeTooLowException Destructor called" << std::endl;
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	if (DEBUG)
	{
		std::cout << "GradeTooLowException what function overload called\n";
		std::cout << "name of class is : " << error_name;
	}
	return name.c_str();
}
