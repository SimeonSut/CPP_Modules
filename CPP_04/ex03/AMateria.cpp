/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssutarmi <ssutarmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 17:57:17 by ssutarmi          #+#    #+#             */
/*   Updated: 2026/10/29 14:49:17 by ssutarmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "ICharacters.hpp"

AMateria::AMateria()
{
	if (DEBUG)
		std::cout << "AMateria Constructor called" << std::endl;
}

AMateria::AMateria( std::string const & type ) : type(type)
{
	if (DEBUG)
		std::cout << "AMateria newType string Constructor called" << std::endl;
}

AMateria::~AMateria()
{
	if (DEBUG)
		std::cout << "AMateria Destructor called" << std::endl;
}

AMateria & AMateria::operator=( AMateria const & src )
{
	if (DEBUG)
		std::cout << "AMateria assignment called" << std::endl;
	type = src.getType();
	return *this;
}

std::string const & AMateria::getType() const
{
	if (DEBUG)
		std::cout << "AMateria getType called" << std::endl;
	return type;
}

void AMateria::use( ICharacter& target )
{
	std::cout << "does something bleak to " << target.getName() << std::endl;
}
