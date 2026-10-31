/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssutarmi <ssutarmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/31 19:02:12 by ssutarmi          #+#    #+#             */
/*   Updated: 2026/10/31 21:31:12 by ssutarmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

# include "Bureaucrat.hpp"

class AForm
{

	public:

		AForm();
		AForm( std::string const & name, bool const & is_signed, short const & grade_to_sign, short const & grade_to_exec );
		AForm( Form const & src );
		~AForm();

		AForm &	operator=( AForm const & src );

		std::string		getName() const;
		bool const &	get_is_signed() const;
		short const &	get_grade_to_sign() const;
		short const &	get_grade_to_exec() const;

		virtual void	beSigned( Bureaucrat const & signer );

		void			out_of_range_thrower( AForm const & src, short const & grade_to_sign, short const & grade_to_exec );
		void			execute( Bureaucrat const & executor ) const;
		virtual void	action() const  = 0;

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

		class FormNotSignedException : public std::exception
		{

			public:

				FormNotSignedException( std::string const & Error );
				~FormNotSignedException() throw();
				virtual const char* what() const throw();

			private:

				std::string error_name;


		};

	protected:
	private:

		const std::string	name;
		bool				is_signed;
		short const			grade_to_sign;
		short const			grade_to_exec;

};

std::ostream &			operator<<( std::ostream & o, Form const & i );

#endif /* ************************************************************ FORM_H */