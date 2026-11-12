/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssutarmi <ssutarmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/31 20:27:16 by ssutarmi          #+#    #+#             */
/*   Updated: 2026/11/12 21:01:46 by ssutarmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# define SCHRUB_GRADE_TO_SIGN 145
# define SCHRUB_GRADE_TO_EXEC 137

# include "AForm.hpp"

class ShrubberyCreationForm : virtual public AForm
{

	public:

		ShrubberyCreationForm();
		ShrubberyCreationForm( std::string const target );
		ShrubberyCreationForm( ShrubberyCreationForm const & src );
		~ShrubberyCreationForm();

		ShrubberyCreationForm &		operator=( ShrubberyCreationForm const & src );

		std::string	getTarget() const;

	protected:

		void		action() const;

	private:

		const std::string			target;

};

std::ostream &			operator<<( std::ostream & outflow, ShrubberyCreationForm const & src );

#endif /* ******************************************* SHRUBBERYCREATIONFORM_H */