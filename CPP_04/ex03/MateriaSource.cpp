/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssutarmi <ssutarmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 14:44:48 by ssutarmi          #+#    #+#             */
/*   Updated: 2026/10/29 14:48:15 by ssutarmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

MateriaSource::MateriaSource()
{
	if (DEBUG)
		std::cout << "MateriaSource Constructor called" << std::endl;
	for (short i = 0; i < 4; i++)
		knownMaterias[i] = NULL;
}

MateriaSource::MateriaSource( MateriaSource const & src )
{
	if (DEBUG)
		std::cout << "MateriaSource Copy Constructor called" << std::endl;
	for (short i = 0; i < 4; i++)
	{
		if (knownMaterias[i] != NULL)
			delete knownMaterias[i];
		if (src.knownMaterias[i] == NULL)
			knownMaterias[i] = NULL;
		else if (src.knownMaterias[i]->getType().compare("cure") == 0)
			knownMaterias[i] = new Cure();
		else if (src.knownMaterias[i]->getType().compare("ice") == 0)
			knownMaterias[i] = new Ice();
	}
}

MateriaSource::~MateriaSource()
{
	if (DEBUG)
		std::cout << "MateriaSource Destructor called" << std::endl;
	for (short i = 0; i < 4 && knownMaterias[i] != NULL; i++)
		delete knownMaterias[i];
}

MateriaSource & MateriaSource::operator=( MateriaSource const & src )
{
	if (DEBUG)
		std::cout << "MateriaSource Assignement operator overload called" << std::endl;
	for (short i = 0; i < 4; i++)
	{
		if (knownMaterias[i] != NULL)
			delete knownMaterias[i];
		if (src.knownMaterias[i] == NULL)
			knownMaterias[i] = NULL;
		else if (src.knownMaterias[i]->getType().compare("cure") == 0)
			knownMaterias[i] = new Cure();
		else if (src.knownMaterias[i]->getType().compare("ice") == 0)
			knownMaterias[i] = new Ice();
	}
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void MateriaSource::learnMateria( AMateria* src )
{
	if (DEBUG)
		std::cout << "MateriaSource learnMateria function called" << std::endl;
	for (short i = 0; i < 4; i++)
	{
		if (knownMaterias[i] == NULL)
		{
			knownMaterias[i] = src;
			break;
		}
	}
}

AMateria* MateriaSource::createMateria( std::string const & type )
{
	if (DEBUG)
		std::cout << "MateriaSource createMateria function called" << std::endl;
	for (short i = 0; i < 4; i++)
	{
		if (knownMaterias[i] == NULL)
			break;
		if (type.compare("ice") == 0 && knownMaterias[i]->getType().compare(type) == 0)
			return new Ice();
		else if (type.compare("cure") == 0 && knownMaterias[i]->getType().compare(type) == 0)
			return new Cure();
	}
	return NULL;
}

// std::string const & MateriaSource::getMateria( short idx ) const
// {
// 	return knownMaterias[idx]->getType();
// }

/* ************************************************************************** */