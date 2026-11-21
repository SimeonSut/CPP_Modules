/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssutarmi <ssutarmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/31 19:02:09 by ssutarmi          #+#    #+#             */
/*   Updated: 2026/11/13 12:45:42 by ssutarmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

AForm::AForm() :
name("NoName"),
is_signed(false),
grade_to_sign(MINIMAL_GRADE),
grade_to_exec(MINIMAL_GRADE)
{
	if (DEBUG)
		std::cout << "AForm Default Constructor called" << std::endl;
}

AForm::AForm( std::string const & name, bool const & is_signed, short const & grade_to_sign, short const & grade_to_exec ) :
name(name),
is_signed(is_signed),
grade_to_sign(grade_to_sign),
grade_to_exec(grade_to_exec)
{
	if (DEBUG)
	{
		std::cout << "AForm Name and Parameters Constructor called" << std::endl;
		std::cout << "Grade to sign is : " << grade_to_sign << "\n";
		std::cout << "Grade to exec is : " << grade_to_exec << "\n";
	}
	out_of_range_thrower( getName(), grade_to_sign, grade_to_exec );
}

AForm::AForm( const AForm & src ) :
name(src.getName()),
is_signed(src.get_is_signed()),
grade_to_sign(src.get_grade_to_sign()),
grade_to_exec(src.get_grade_to_exec())
{
	if (DEBUG)
		std::cout << "AForm Copy Constructor called" << std::endl;
	out_of_range_thrower( getName(), grade_to_sign, grade_to_exec );
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

AForm::~AForm()
{
	if (DEBUG)
		std::cout << "AForm Destructor Constructor called" << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

AForm &	AForm::operator=( AForm const & src )
{
	if (DEBUG)
		std::cout << "AForm Assignment overload called" << std::endl;
	is_signed = src.get_is_signed();
	return *this;
}

std::ostream &	operator<<( std::ostream & outflow, AForm const & src )
{
	if (DEBUG)
		std::cout << "AForm Outstream overload called" << std::endl;
	outflow	<< src.getName() << " Form's has the following values :\n\n\t\t\t\t\t"
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

void AForm::beSigned( Bureaucrat const & signer )
{
	if (DEBUG)
		std::cout << "AForm beSigned called" << std::endl;
	if ( is_signed == true )
		return ;
	if ( signer.getGrade() <= get_grade_to_sign() )
		is_signed = true;
	else
		throw AForm::GradeTooLowException( signer.getName() );
}

void	AForm::out_of_range_thrower( std::string error_transmission, short const & grade_to_sign, short const & grade_to_exec )
{
	if ( DEBUG )
		std::cout << this->getName() << "'s Form out_of_range checker function called" << std::endl;
	if ( grade_to_sign > MINIMAL_GRADE )
		throw AForm::GradeTooLowException( error_transmission.append(" Form's grade_to_sign") );
	if ( grade_to_exec > MINIMAL_GRADE )
		throw AForm::GradeTooLowException( error_transmission.append(" Form's grade_to_exec") );
	if ( grade_to_sign < MAXIMAL_GRADE )
		throw AForm::GradeTooHighException( error_transmission.append(" Form's grade_to_sign") );
	if ( grade_to_exec < MAXIMAL_GRADE )
		throw AForm::GradeTooHighException( error_transmission.append(" Form's grade_to_exec") );
}

void	AForm::check_exec_validity( std::string bureaucrat_name, short grade ) const
{
	if (DEBUG)
		std::cout << getName() << "'s AForm execute function called" << std::endl;
	if ( get_is_signed() == false )
	{
		throw AForm::FormNotSignedException( bureaucrat_name.append(" can't execute because ") );
		return ;
	}
	if (DEBUG)
	{
		std::cout	<< "executor grade is : " << grade << "\n"
					<< "grade to execute is : " << get_grade_to_exec() << std::endl;
	}
	if ( grade > get_grade_to_exec() )
	{
		bureaucrat_name.append( "'s grade to execute " );
		bureaucrat_name.append( getName() );
		throw AForm::GradeTooLowException( bureaucrat_name );
		return ;
	}
	execute();
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string	AForm::getName() const
{
	return name;
}

bool const &	AForm::get_is_signed() const
{
	return is_signed;
}

short const &	AForm::get_grade_to_sign() const
{
	return grade_to_sign;
}

short const &	AForm::get_grade_to_exec() const
{
	return grade_to_exec;
}
/* ************************************************************************** */

//------------------------------------------HIGH-------------------------------------------------------

AForm::GradeTooHighException::GradeTooHighException( std::string const & Error ) :
error_name(Error)
{
	if (DEBUG)
	{
		std::cout << "FORM GradeTooHighException Constructor called" << std::endl;
	}
	error_name.append(" is too high!");
	if (DEBUG)
	{
		std::cout << "newName is : " << Error << std::endl;
		std::cout << "name is : " << error_name << std::endl;
	}
}

AForm::GradeTooHighException::~GradeTooHighException() throw()
{
	if (DEBUG)
		std::cout << "FORM GradeTooHighException Destructor called" << std::endl;
}

const char* AForm::GradeTooHighException::what() const throw()
{
	if (DEBUG)
	{
		std::cout << "FORM GradeTooHighException what function overload called\n";
		std::cout << "name of class is : " << error_name;
	}
	return error_name.c_str();
}

//------------------------------------------LOW-------------------------------------------------------

AForm::GradeTooLowException::GradeTooLowException( std::string const & Error ) :
error_name(Error)
{
	if (DEBUG)
	{
		std::cout << "FORM GradeTooLowException Constructor called" << std::endl;
	}
	error_name.append(" is too low!");
	if (DEBUG)
	{
		std::cout << "newName is : " << Error << std::endl;
		std::cout << "name is : " << error_name << std::endl;
	}
}

AForm::GradeTooLowException::~GradeTooLowException() throw()
{
	if (DEBUG)
		std::cout << "FORM GradeTooLowException Destructor called" << std::endl;
}

const char* AForm::GradeTooLowException::what() const throw()
{
	if (DEBUG)
	{
		std::cout << "FORM GradeTooLowException what function overload called\n";
		std::cout << "name of class is : " << error_name;
	}
	return error_name.c_str();
}

//------------------------------------------NOT SIGNED-------------------------------------------------------

AForm::FormNotSignedException::FormNotSignedException( std::string const & Error ) :
error_name(Error)
{
	if (DEBUG)
	{
		std::cout << "FormNotSignedException Constructor called" << std::endl;
	}
	error_name.append("Form is not signed!");
}

AForm::FormNotSignedException::~FormNotSignedException() throw()
{
	if (DEBUG)
		std::cout << "FormNotSignedException Destructor called" << std::endl;
}

const char* AForm::FormNotSignedException::what() const throw()
{
	if (DEBUG)
	{
		std::cout << "FormNotSignedException what function overload called\n";
		std::cout << "name of class is : " << error_name;
	}
	return error_name.c_str();
}
