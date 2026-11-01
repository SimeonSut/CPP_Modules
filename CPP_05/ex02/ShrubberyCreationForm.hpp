/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/31 20:27:16 by ssutarmi          #+#    #+#             */
/*   Updated: 2026/11/01 20:49:28 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "AForm.hpp"

class ShrubberyCreationForm : virtual public AForm
{

	public:

		ShrubberyCreationForm();
		ShrubberyCreationForm( std::string const target );
		ShrubberyCreationForm( ShrubberyCreationForm const & src );
		~ShrubberyCreationForm();

		ShrubberyCreationForm &		operator=( ShrubberyCreationForm const & src );

		std::string	getName() const;
		std::string	getTarget() const;

	protected:

		void		action() const;

	private:

		const std::string			name;
		const std::string			target;
		bool						is_signed;
		static const short			shrub_grade_to_sign = 145;
		static const short			shrub_grade_to_exec = 137;

};

std::ostream &			operator<<( std::ostream & outflow, ShrubberyCreationForm const & src );

#endif /* ******************************************* SHRUBBERYCREATIONFORM_H */