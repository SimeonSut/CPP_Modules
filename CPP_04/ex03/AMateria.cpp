/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssutarmi <ssutarmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 17:57:17 by ssutarmi          #+#    #+#             */
/*   Updated: 2026/10/28 21:34:52 by ssutarmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "ICharacters.hpp"
/*
AMateria::AMateria() : type("AMateria")
{}

AMateria::AMateria( std::string const & type ) : type(type)
{}

AMateria::~AMateria()
{}
*/
std::string const & AMateria::getType() const
{
	return type;
}
/*
AMateria & AMateria::operator=( AMateria const & src )
{
	type = src.getType();
	return *this;
}

void AMateria::use( ICharacter& target )
{}*/
