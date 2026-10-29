/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssutarmi <ssutarmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 18:52:43 by ssutarmi          #+#    #+#             */
/*   Updated: 2026/10/29 14:48:33 by ssutarmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice()
{
	if (DEBUG)
		std::cout << "Ice Constructor called" << std::endl;
	type = "ice";
}

Ice::Ice( Ice const & src )
{
	if (DEBUG)
		std::cout << "Ice Copy Constructor called" << std::endl;
	type = src.getType();
}

Ice::Ice( std::string const & newType )
{
	if (DEBUG)
		std::cout << "Ice newType string Constructor called" << std::endl;
	type = newType;
}

Ice::~Ice()
{
	if (DEBUG)
		std::cout << "Ice Destructor called" << std::endl;
}

//Is the inherited getType function getting the Type of Ice or AMateria???

// void Ice::setType( std::string const & type )
// {
// 	this->type = type;
// }

Ice & Ice::operator=( Ice const & src )
{
	if (DEBUG)
		std::cout << "Ice Assignment operator overload called" << std::endl;
	type = src.getType();
	return *this;
}

AMateria* Ice::clone() const
{
	if (DEBUG)
		std::cout << "Ice clone function called" << std::endl;
	AMateria* cloneMateria = new Ice();
	return cloneMateria;
}

void Ice::use( ICharacter& target )
{
	if (DEBUG)
		std::cout << "Cure use function called" << std::endl;
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}