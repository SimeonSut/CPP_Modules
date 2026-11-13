/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssutarmi <ssutarmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/31 20:27:19 by ssutarmi          #+#    #+#             */
/*   Updated: 2026/11/13 12:46:52 by ssutarmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# define ROBOT_GRADE_TO_SIGN 72
# define ROBOT_GRADE_TO_EXEC 45

# include "AForm.hpp"

class RobotomyRequestForm : virtual public AForm
{

	public:

		RobotomyRequestForm();
		RobotomyRequestForm( std::string const & target );
		RobotomyRequestForm( RobotomyRequestForm const & src );
		~RobotomyRequestForm();

		RobotomyRequestForm &		operator=( RobotomyRequestForm const & src );

		std::string	getTarget() const;

	protected:

		void		execute() const;

	private:

		std::string const			target;

};

std::ostream &			operator<<( std::ostream & outflow, RobotomyRequestForm const & src );

#endif /* ********************************************* ROBOTOMYREQUESTFORM_H */