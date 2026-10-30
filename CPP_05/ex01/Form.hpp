#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"

class Form
{

	public:

		Form();
		Form( std::string const & name, bool const & is_signed, short const & grade_to_sign, short const & grade_to_exec );
		Form( Form const & src );
		~Form();

		Form &	operator=( Form const & src );

		std::string	getName() const;
		bool const &	get_is_signed() const;
		short const &	get_grade_to_sign() const;
		short const &	get_grade_to_exec() const;

		void	beSigned( Bureaucrat const & signer );

		void	out_of_range_thrower( Form const & src, short const & grade_to_sign, short const & grade_to_exec );

		class GradeTooHighException : public std::exception
		{
			public:

				GradeTooHighException( std::string const & Error );
				~GradeTooHighException() throw();
				virtual const char* what() const throw();

			private:

				std::string error_name;

		};

		class GradeTooLowException : public std::exception
		{

			public:

				GradeTooLowException( std::string const & Error );
				~GradeTooLowException() throw();
				virtual const char* what() const throw();

			private:

				std::string error_name;

		};

	protected:
	private:

		std::string const & name;
		bool				is_signed;
		short const			grade_to_sign;
		short const			grade_to_exec;

};

std::ostream &			operator<<( std::ostream & o, Form const & i );

#endif /* ************************************************************ FORM_H */