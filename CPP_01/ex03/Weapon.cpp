/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssutarmi <ssutarmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 15:29:45 by ssutarmi          #+#    #+#             */
/*   Updated: 2026/10/07 18:29:50 by ssutarmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{}

Weapon::Weapon( std::string name ) : _type(name)
{}

Weapon::~Weapon()
{}

std::string	Weapon::getType( void ) const
{
	const std::string	REF = this->_type;

	return REF;
}

void Weapon::setType( const std::string newType)
{
	this->_type = newType;
}
