/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssutarmi <ssutarmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/31 20:27:16 by ssutarmi          #+#    #+#             */
/*   Updated: 2026/10/31 21:40:30 by ssutarmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "AForm.hpp"

class ShrubberyCreationForm : virtual public AForm
{

	public:

		ShrubberyCreationForm();
		ShrubberyCreationForm( std::string const & target );
		ShrubberyCreationForm( ShrubberyCreationForm const & src );
		~ShrubberyCreationForm();

		ShrubberyCreationForm &		operator=( ShrubberyCreationForm const & src );

		std::string	getName() const;
		std::string	getTarget() const;
		void		action() const;

	private:

		const std::string			name;
		std::string const			target;
		bool						is_signed;
		static const short			grade_to_sign = 145;
		static const short			grade_to_exec = 137;

};

std::ostream &			operator<<( std::ostream & outflow, ShrubberyCreationForm const & src );

#endif /* ******************************************* SHRUBBERYCREATIONFORM_H */