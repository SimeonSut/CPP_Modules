/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssutarmi <ssutarmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 18:52:41 by ssutarmi          #+#    #+#             */
/*   Updated: 2026/10/28 23:32:22 by ssutarmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : type("cure")
{}

Cure::Cure( Cure const & src ) : type(src.getType())
{}

Cure::Cure( std::string const & type ) : type(type)
{}

Cure::~Cure()
{}

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