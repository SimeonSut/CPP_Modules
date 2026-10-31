/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssutarmi <ssutarmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/31 20:27:19 by ssutarmi          #+#    #+#             */
/*   Updated: 2026/10/31 21:40:33 by ssutarmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "AForm.hpp"

class RobotomyRequestForm : virtual public AForm
{

	public:

		RobotomyRequestForm();
		RobotomyRequestForm( std::string const & target );
		RobotomyRequestForm( RobotomyRequestForm const & src );
		~RobotomyRequestForm();

		RobotomyRequestForm &		operator=( RobotomyRequestForm const & src );

		std::string	getName() const;
		std::string	getTarget() const;
		void		action() const;;

	private:

		const std::string			name;
		std::string const			target;
		bool						is_signed;
		static const short			grade_to_sign = 72;
		static const short			grade_to_exec = 45;

};

std::ostream &			operator<<( std::ostream & outflow, RobotomyRequestForm const & src );

#endif /* ********************************************* ROBOTOMYREQUESTFORM_H */