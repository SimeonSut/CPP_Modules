/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssutarmi <ssutarmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/31 20:27:21 by ssutarmi          #+#    #+#             */
/*   Updated: 2026/11/13 12:46:13 by ssutarmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# define PRESIDENT_GRADE_TO_SIGN 25
# define PRESIDENT_GRADE_TO_EXEC 5

# include "AForm.hpp"

class PresidentialPardonForm : virtual public AForm
{

	public:

		PresidentialPardonForm();
		PresidentialPardonForm( std::string const & target );
		PresidentialPardonForm( PresidentialPardonForm const & src );
		~PresidentialPardonForm();

		PresidentialPardonForm &		operator=( PresidentialPardonForm const & src );

		std::string	getTarget() const;

	protected:

		void		execute() const;

	private:

		std::string const			target;

};

std::ostream &			operator<<( std::ostream & outflow, PresidentialPardonForm const & src );

#endif /* ****************************************** PRESIDENTIALPARDONFORM_H */