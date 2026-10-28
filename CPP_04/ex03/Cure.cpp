/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssutarmi <ssutarmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 18:52:41 by ssutarmi          #+#    #+#             */
/*   Updated: 2026/10/28 21:54:59 by ssutarmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria(), type("cure")
{}

Cure::Cure( Cure const & src ) : AMateria(), type(src.getType())
{}

Cure::Cure( std::string const & type ) : AMateria(), type(type)
{}

Cure::~Cure()
{}

//Is the inherited getType function getting the Type of Cure or AMateria???

// void Cure::setType( std::string const & type )
// {
// 	this->type = type;
// }

Cure & Cure::operator=( Cure const & src )
{
	type = src.getType();
	return *this;
}

AMateria* Cure::clone() const
{
	AMateria* cloneMateria = new Cure();
	return cloneMateria;
}

void Cure::use( ICharacter& target )
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}