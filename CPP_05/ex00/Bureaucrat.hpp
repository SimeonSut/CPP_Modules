/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssutarmi <ssutarmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 17:30:14 by ssutarmi          #+#    #+#             */
/*   Updated: 2026/10/29 22:39:57 by ssutarmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# ifndef DEBUG
# define DEBUG 0
# endif

#include <iostream>
# include <string>
# include <exception>

class Bureaucrat
{

	public:

		Bureaucrat();
		Bureaucrat( std::string const & newName, short const & newGrade );
		Bureaucrat( Bureaucrat const & src );
		~Bureaucrat();

		Bureaucrat	&	operator=( Bureaucrat const & src );

		Bureaucrat	&	operator++( void );
		Bureaucrat		operator++( int );
		Bureaucrat	&	operator--( void );
		Bureaucrat		operator--( int );

		int		out_of_range_thrower( Bureaucrat const & src, short grade );

		void	GradeTooHighException();
		void	GradeTooLowException();
		short	getGrade() const;
		std::string const & getName() const;

	protected:
	private:

		short				grade;
		std::string const	name;

};

std::ostream &	operator<<( std::ostream & flowstram, Bureaucrat const & src );

#endif /* ****************************************************** BUREAUCRAT_H */