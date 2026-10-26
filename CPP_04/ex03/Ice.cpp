/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssutarmi <ssutarmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 18:52:43 by ssutarmi          #+#    #+#             */
/*   Updated: 2026/10/26 20:57:55 by ssutarmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : type("ice")
{}

Ice::Ice( std::string const & type ) : type(type)
{}

Ice::~Ice()
{}

//Is the inherited getType function getting the Type of Ice or AMateria???

// void Ice::setType( std::string const & type )
// {
// 	this->type = type;
// }

Ice & Ice::operator=( Ice const & src )
{
	type = src.getType();
	return *this;
}

AMateria* Ice::clone() const
{
	AMateria* cloneMateria = new Ice();
	return cloneMateria;
}

void Ice::use( ICharacter& target )
{}