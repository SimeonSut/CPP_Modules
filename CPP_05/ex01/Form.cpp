#include "Form.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Form::Form() : name("NoName"), is_signed(false), grade_to_sign(MINIMAL_GRADE), grade_to_exec(MINIMAL_GRADE)
{}

Form::Form( std::string const & name, bool const & is_signed, short const & grade_to_sign, short const & grade_to_exec ) :	name(name),
																															is_signed(is_signed),
																															grade_to_sign(grade_to_sign),
																															grade_to_exec(grade_to_exec)
{
	out_of_range_thrower( *this, grade_to_sign, grade_to_exec );
}

Form::Form( const Form & src ) :	name(src.getName()),
									is_signed(src.get_is_signed()),
									grade_to_sign(src.get_grade_to_sign()),
									grade_to_exec(src.get_grade_to_exec())
{
	out_of_range_thrower( *this, grade_to_sign, grade_to_exec );
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Form::~Form()
{}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Form &	Form::operator=( Form const & src )
{
	is_signed = src.get_is_signed();
	return *this;
}

std::ostream &	operator<<( std::ostream & outflow, Form const & src )
{
	outflow	<< src.getName() << " Form's has the following values :\n\t"
			<< "grade_to_signe is : " << src.get_grade_to_sign() << "\n\t"
			<< "grade_to_exec is : " << src.get_grade_to_exec() << "\n\t"
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

void Form::beSigned( Bureaucrat const & signer )
{
	if ( is_signed == true )
		return ;
	if ( signer.getGrade() <= get_grade_to_sign() )
		is_signed = true;
	else
		throw Form::GradeTooLowException( signer.getName() );
}

void	Form::out_of_range_thrower( Form const & src, short const & grade_to_sign, short const & grade_to_exec )
{
	std::string error_transmission = src.getName();

	if (DEBUG)
		std::cout << "Form's out_of_range checker function called" << std::endl;
	if (grade_to_sign > MINIMAL_GRADE)
		throw Form::GradeTooLowException( error_transmission.append(" Form's grade_to_sign") );
	if (grade_to_exec > MINIMAL_GRADE)
		throw Form::GradeTooLowException( error_transmission.append(" Form's grade_to_exec") );
	if (grade_to_sign < MAXIMAL_GRADE)
		throw Form::GradeTooHighException( error_transmission.append(" Form's grade_to_sign") );
	if (grade_to_exec < MAXIMAL_GRADE)
		throw Form::GradeTooHighException( error_transmission.append(" Form's grade_to_exec") );
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

//------------------------------------------HIGH-------------------------------------------------------

Form::GradeTooHighException::GradeTooHighException( std::string const & Error ) : error_name(Error)
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

Form::GradeTooHighException::~GradeTooHighException() throw()
{
	if (DEBUG)
		std::cout << "FORM GradeTooHighException Destructor called" << std::endl;
}

const char* Form::GradeTooHighException::what() const throw()
{
	if (DEBUG)
	{
		std::cout << "FORM GradeTooHighException what function overload called\n";
		std::cout << "name of class is : " << error_name;
	}
	return error_name.c_str();
}

//------------------------------------------LOW-------------------------------------------------------

Form::GradeTooLowException::GradeTooLowException( std::string const & Error ) : error_name(Error)
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

Form::GradeTooLowException::~GradeTooLowException() throw()
{
	if (DEBUG)
		std::cout << "FORM GradeTooLowException Destructor called" << std::endl;
}

const char* Form::GradeTooLowException::what() const throw()
{
	if (DEBUG)
	{
		std::cout << "FORM GradeTooLowException what function overload called\n";
		std::cout << "name of class is : " << error_name;
	}
	return error_name.c_str();
}
