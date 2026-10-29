/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssutarmi <ssutarmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 18:52:41 by ssutarmi          #+#    #+#             */
/*   Updated: 2026/10/29 14:48:45 by ssutarmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure()
{
	if (DEBUG)
		std::cout << "Cure Constructor called" << std::endl;
	type = "cure";
}

Cure::Cure( Cure const & src )
{
	if (DEBUG)
		std::cout << "Cure Copy Constructor called" << std::endl;
	type = src.getType();
}

Cure::Cure( std::string const & newType )
{
	if (DEBUG)
		std::cout << "Cure newType string Constructor called" << std::endl;
	type = newType;
}

Cure::~Cure()
{
	if (DEBUG)
		std::cout << "Cure Destructor called" << std::endl;
}

Cure & Cure::operator=( Cure const & src )
{
	if (DEBUG)
		std::cout << "Cure Assignment operator overload called" << std::endl;
	type = src.getType();
	return *this;
}

AMateria* Cure::clone() const
{
	if (DEBUG)
		std::cout << "Cure clone function called" << std::endl;
	AMateria* cloneMateria = new Cure();
	return cloneMateria;
}

void Cure::use( ICharacter& target )
{
	if (DEBUG)
		std::cout << "Cure use function called" << std::endl;
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}