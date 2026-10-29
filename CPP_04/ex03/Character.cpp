/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssutarmi <ssutarmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 21:08:20 by ssutarmi          #+#    #+#             */
/*   Updated: 2026/10/29 16:01:54 by ssutarmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

Character::Character() : name("NoName")
{
	if (DEBUG)
		std::cout << "Character Constructor called" << std::endl;
	garbage_colector = new t_colector;
	garbage_head = garbage_colector;
	garbage_colector->garbage = NULL;
	garbage_colector->next = NULL;
	for (short i = 0; i < 4; i++)
		inventory[i] = NULL;
}

Character::Character( Character const & src ) : name(src.getName())
{
	if (DEBUG)
		std::cout << "Character Copy Constructor called" << std::endl;
	garbage_colector = new t_colector;
	garbage_head = garbage_colector;
	garbage_colector->garbage = NULL;
	garbage_colector->next = NULL;
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
	if (DEBUG)
		std::cout << "Character newName string Constructor called" << std::endl;
	garbage_colector = new t_colector;
	garbage_head = garbage_colector;
	garbage_colector->garbage = NULL;
	garbage_colector->next = NULL;
	for (short i = 0; i < 4; i++)
		inventory[i] = NULL;
}

Character::~Character()
{
	t_colector *tmp = garbage_head;

	if (DEBUG)
		std::cout << "Character Destructor called" << std::endl;
	for (short i = 0; i < 4 && inventory[i] != NULL; i++)
		delete inventory[i];
	while (garbage_head)
	{
		garbage_head = garbage_head->next;
		delete tmp;
		tmp = garbage_head;
	}
}

Character & Character::operator=( Character const & src )
{
	if (DEBUG)
		std::cout << "Character Assignement overload called" << std::endl;
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
	if (DEBUG)
		std::cout << "Character getName called" << std::endl;
	return name;
}

void Character::equip( AMateria* m )
{
	if (DEBUG)
		std::cout << "Character equip called" << std::endl;
	if (m == NULL || (m->getType().compare("cure") != 0 && m->getType().compare("ice") != 0))
		return;
	for (short i = 0; i < 4; i++)
	{
		if (inventory[i] == NULL)
		{
			if (m->getType().compare("cure") == 0)
				inventory[i] = new Cure();
			if (m->getType().compare("ice") == 0)
				inventory[i] = new Ice();
			break;
		}
	}
	delete m;
}

void Character::unequip( int idx )
{
	if (DEBUG)
		std::cout << "Character unequip called" << std::endl;
	if (idx < 0 || idx > 3)
		std::cout << "nice try, now give it a valid index" << std::endl;
	if (inventory[idx] != NULL)
	{
		garbage_colector->garbage = inventory[idx];
		inventory[idx] = NULL;
		garbage_colector->next = new t_colector;
		garbage_colector = garbage_colector->next;
		garbage_colector->garbage = NULL;
		garbage_colector->next = NULL;
	}
}

void Character::use( int idx, ICharacter& target )
{
	if (DEBUG)
		std::cout << "Character use called" << std::endl;
	if (idx < 0 || idx > 3 || inventory[idx] == NULL)
	{
		std::cout << "use a valid index you idiot!" << std::endl;
		return ;
	}
	if (inventory[idx]->getType().compare("ice") == 0 || inventory[idx]->getType().compare("cure") == 0)
	{
		inventory[idx]->use(target);
		if (inventory[idx] != NULL)
			delete inventory[idx];
	}
}
