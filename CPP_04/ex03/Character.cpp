/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssutarmi <ssutarmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 21:08:20 by ssutarmi          #+#    #+#             */
/*   Updated: 2026/10/26 22:02:28 by ssutarmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() : name("NoName")
{
	for (short i = 0; i < 4; i++)
		inventory[i] = NULL;
}

Character::Character( Character const & src ) : name(src.getName())
{
	for (short i = 0; i < 4; i++)
		inventory[i] = NULL;
}

Character::~Character()
{}

std::string const & Character::getName() const
{
	return name;
}

void Character::equip(AMateria* m)
{
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

void Character::unequip(int idx)
{
	if (idx < 0 || idx > 3)
		std::cout << "nice try, now give it a valid index" << std::endl;
	if (inventory[idx])
		delete inventory[idx];
}

void Character::use(int idx, ICharacter& target)
{}

Character & Character::operator=( Character const & src )
{}
