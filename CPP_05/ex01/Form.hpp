#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"

class Form
{

	public:

		Form();
		Form( Form const & src );
		~Form();

		Form &		operator=( Form const & src );

		std::string		getName() const;
		bool const &	get_is_signed() const;
		short const &	get_grade_to_sign() const;
		short const &	get_grade_to_exec() const;

		int				out_of_range_thrower( Form const & src, short grade );
		void			GradeTooHighException( std::string name );
		void			GradeTooLowException( std::string name );

	protected:
	private:

		std::string const & name;
		bool				is_signed;
		short const			grade_to_sign;
		short const			grade_to_exec;

};

std::ostream &			operator<<( std::ostream & o, Form const & i );

#endif /* ************************************************************ FORM_H */