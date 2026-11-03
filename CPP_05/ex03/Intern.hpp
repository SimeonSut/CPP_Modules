/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 14:00:09 by marvin            #+#    #+#             */
/*   Updated: 2026/11/03 14:04:33 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include "AForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class Intern
{

	public:

		Intern();
		~Intern();

		AForm*	makeForm( std::string FormName, std::string FormTarget ) const;

	private:

		AForm*	makeShrub( std::string & FormTarget ) const;
		AForm*	makeRobot( std::string & FormTarget ) const;
		AForm*	makePresident( std::string & FormTarget ) const;

};

#endif /* ********************************************************** INTERN_H */