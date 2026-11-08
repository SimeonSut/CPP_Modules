/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialize.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 17:37:07 by ssutarmi          #+#    #+#             */
/*   Updated: 2026/11/08 18:37:23 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialize.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Serialize::Serialize()
{
	if (DEBUG)
	{
		std::cout << "Constructor called"<<std::endl;
	}
}

Serialize::Serialize( const Serialize & src )
{
	if (DEBUG)
	{
		std::cout << "Copy Constructor called"<<std::endl;
	}
	if (this == &src)
		return ;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Serialize::~Serialize()
{
	if (DEBUG)
	{
		std::cout << "Destructor called"<<std::endl;
	}
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Serialize &				Serialize::operator=( Serialize const & src )
{
	if ( this == &src )
		return *this;
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

uintptr_t Serialize::serialize(Data* ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data* Serialize::deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data *>(raw);
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */