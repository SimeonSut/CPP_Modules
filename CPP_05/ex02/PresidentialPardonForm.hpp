/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssutarmi <ssutarmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/31 20:27:21 by ssutarmi          #+#    #+#             */
/*   Updated: 2026/10/31 21:40:36 by ssutarmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "AForm.hpp"

class PresidentialPardonForm : virtual public AForm
{

	public:

		PresidentialPardonForm();
		PresidentialPardonForm( std::string const & target );
		PresidentialPardonForm( PresidentialPardonForm const & src );
		~PresidentialPardonForm();

		PresidentialPardonForm &		operator=( PresidentialPardonForm const & src );

		std::string	getName() const;
		std::string	getTarget() const;
		void		action() const;;

	private:

		const std::string			name;
		std::string const			target;
		bool						is_signed;
		static const short			grade_to_sign = 25;
		static const short			grade_to_exec = 5;

};

std::ostream &			operator<<( std::ostream & outflow, PresidentialPardonForm const & src );

#endif /* ****************************************** PRESIDENTIALPARDONFORM_H */