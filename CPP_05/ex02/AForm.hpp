/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/31 19:02:12 by ssutarmi          #+#    #+#             */
/*   Updated: 2026/11/01 20:49:52 by marvin           ###   ########.fr       */
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
		AForm( AForm const & src );
		~AForm();

		AForm &	operator=( AForm const & src );

		std::string			getName() const;
		virtual std::string	getTarget() const = 0;
		bool const &		get_is_signed() const;
		short const &		get_grade_to_sign() const;
		short const &		get_grade_to_exec() const;

		virtual void	beSigned( Bureaucrat const & signer );

		void			out_of_range_thrower( std::string error_transmission, short const & grade_to_sign, short const & grade_to_exec );
		void			execute( std::string executor, short grade ) const;

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

		virtual void	action() const = 0;

	private:

		const std::string	name;
		bool				is_signed;
		short const			grade_to_sign;
		short const			grade_to_exec;

};

std::ostream &			operator<<( std::ostream & o, AForm const & i );

#endif /* ************************************************************ FORM_H */