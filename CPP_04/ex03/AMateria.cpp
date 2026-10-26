/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssutarmi <ssutarmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 17:57:17 by ssutarmi          #+#    #+#             */
/*   Updated: 2026/10/26 20:43:33 by ssutarmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() : type("AMateria")
{}

AMateria::AMateria( std::string const & type ) : type(type)
{}

AMateria::~AMateria()
{}

std::string const & AMateria::getType() const
{
	return type;
}

// void AMateria::setType( std::string const & type )
// {
// 	this->type = type;
// }

AMateria & AMateria::operator=( AMateria const & src )
{
	type = src.getType();
	return *this;
}

void AMateria::use( ICharacter& target )
{}
