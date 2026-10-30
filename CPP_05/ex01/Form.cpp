#include "Form.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Form::Form() : name("NoName"), is_signed(false), grade_to_sign(150), grade_to_exec(150)
{}

Form::Form( const Form & src ) : name(src.getName()), is_signed(src.get_is_signed()), grade_to_sign(src.get_grade_to_sign()), grade_to_exec(src.get_grade_to_exec())
{
	out_of_range_thrower( *this, grade_to_exec );
	out_of_range_thrower( *this, grade_to_sign );
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Form::~Form()
{
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Form &	Form::operator=( Form const & src )
{
	is_signed = src.get_is_signed();
	return *this;
}

std::ostream &	operator<<( std::ostream & outflow, Form const & i )
{
	outflow << ;
	return outflow;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

int	Form::out_of_range_thrower( Form const & src, short grade )
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

void Form::GradeTooHighException( std::string name )
{
	throw std::out_of_range( name + " Form's grade is too high!" );
}

void Form::GradeTooLowException( std::string name )
{
	throw std::out_of_range( name + " Form's grade is too low!" );
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string	Form::getName() const
{
	return name;
}

bool const &	Form::get_is_signed() const
{
	return is_signed;
}

short const &	Form::get_grade_to_sign() const
{
	return grade_to_sign;
}

short const &	Form::get_grade_to_exec() const
{
	return grade_to_exec;
}

/* ************************************************************************** */