/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssutarmi <ssutarmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 17:57:17 by ssutarmi          #+#    #+#             */
/*   Updated: 2026/10/28 23:42:29 by ssutarmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "ICharacters.hpp"

AMateria::AMateria()
{}

AMateria::AMateria( std::string const & type ) : type(type)
{}

AMateria::~AMateria()
{}

AMateria & AMateria::operator=( AMateria const & src )
{
	type = src.getType();
	return *this;
}

std::string const & AMateria::getType() const
{
	return type;
}

void AMateria::use( ICharacter& target )
{
	std::cout << "does something bleak to " << target.getName() << std::endl;
}
