/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssutarmi <ssutarmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 21:08:20 by ssutarmi          #+#    #+#             */
/*   Updated: 2026/10/28 23:24:48 by ssutarmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

Character::Character() : name("NoName")
{
	for (short i = 0; i < 4; i++)
		inventory[i] = NULL;
}

Character::Character( Character const & src ) : name(src.getName())
{
	for (short i = 0; i < 4; i++)
	{
		if (inventory[i] != NULL)
			delete inventory[i];
		if (src.inventory[i] == NULL)
			inventory[i] = NULL;
		else if (src.inventory[i]->getType().compare("cure") == 0)
			inventory[i] = new Cure();
		else if (src.inventory[i]->getType().compare("ice") == 0)
			inventory[i] = new Ice();
	}
}

Character::Character( std::string const & newName ) : name(newName)
{
	for (short i = 0; i < 4; i++)
		inventory[i] = NULL;
}

Character::~Character()
{
	for (short i = 0; i < 4 && inventory[i] != NULL; i++)
		delete inventory[i];
}

Character & Character::operator=( Character const & src )
{
	name = src.getName();
	for (short i = 0; i < 4; i++)
	{
		if (inventory[i] != NULL)
			delete inventory[i];
		if (src.inventory[i] == NULL)
			inventory[i] = NULL;
		else if (src.inventory[i]->getType().compare("cure") == 0)
			inventory[i] = new Cure();
		else if (src.inventory[i]->getType().compare("ice") == 0)
			inventory[i] = new Ice();
	}
	return *this;
}

std::string const & Character::getName() const
{
	return name;
}

void Character::equip( AMateria* m )
{
	if (m == NULL)
		return;
	if (m->getType().compare("cure") == 0)
		m = new Cure();
	else if (m->getType().compare("ice") == 0)
		m = new Ice();
	for (short i = 0; i < 4; i++)
	{
		if (inventory[i])
		{
			inventory[i] = m;
			break;
		}
	}
}

void Character::unequip( int idx )
{
	if (idx < 0 || idx > 3)
		std::cout << "nice try, now give it a valid index" << std::endl;
	if (inventory[idx] != NULL)
	{
		delete inventory[idx];
		inventory[idx] = NULL;
	}
}

void Character::use( int idx, ICharacter& target )
{
	if (idx < 0 || idx > 3 || inventory[idx] == NULL)
	{
		std::cout << "use a valide index you idiot!" << std::endl;
		return ;
	}
	if (inventory[idx]->getType().compare("ice") == 0 || inventory[idx]->getType().compare("cure") == 0)
		inventory[idx]->use(target);
}
