/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/31 20:27:19 by ssutarmi          #+#    #+#             */
/*   Updated: 2026/11/01 20:51:40 by marvin           ###   ########.fr       */
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

	protected:

		void		action() const;

	private:

		const std::string			name;
		std::string const			target;
		bool						is_signed;
		static const short			robot_grade_to_sign = 72;
		static const short			robot_grade_to_exec = 45;

};

std::ostream &			operator<<( std::ostream & outflow, RobotomyRequestForm const & src );

#endif /* ********************************************* ROBOTOMYREQUESTFORM_H */