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

		AForm*	makeForm( std::string & FormName, std::string & FormTarget ) const;

	private:

		ShrubberyCreationForm*	makeShrub( std::string & FormTarget ) const;
		RobotomyRequestForm*	makeRobot( std::string & FormTarget ) const;
		PresidentialPardonForm*	makePresident( std::string & FormTarget ) const;

};

#endif /* ********************************************************** INTERN_H */