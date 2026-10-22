/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssutarmi <ssutarmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 18:25:58 by ssutarmi          #+#    #+#             */
/*   Updated: 2026/10/22 21:32:15 by ssutarmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name("NoName"), HitPoints(10), EnergyPoints(10), AttackDamage(0)
{
	if (DEBUG)
		std::cout << "Constructor called" << std::endl;
}

ClapTrap::ClapTrap( std::string newName ) : name(newName), HitPoints(10), EnergyPoints(10), AttackDamage(0)
{
	if (DEBUG)
		std::cout << "Constructor with newName parameter" << newName << " called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap & src) : name(src.getName()), HitPoints(src.getHitPoints()), EnergyPoints(src.getEnergyPoints()), AttackDamage(src.getAttackDamage())
{
	if (DEBUG)
		std::cout << "Copy Constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	if (DEBUG)
		std::cout << "Destructor called" << std::endl;
}

ClapTrap & ClapTrap::operator=(const ClapTrap & src)
{
	if (DEBUG)
		std::cout << "Assignement operator overload called" << std::endl;
	setName(src.getName());
	setHitPoints(src.getHitPoints());
	setEnergyPoints(src.getEnergyPoints());
	setAttackDamage(src.getAttackDamage());
	return *this;
}

//--------------------GETTERS--------------------

std::string ClapTrap::getName() const
{
	if (DEBUG)
		std::cout << "getname called" << std::endl;
	return name;
}

short ClapTrap::getHitPoints() const
{
	if (DEBUG)
		std::cout << "getHitPoints calles" << std::endl;
	return HitPoints;
}

short ClapTrap::getEnergyPoints() const
{
	if (DEBUG)
		std::cout << "getEnergyPoints called" << std::endl;
	return EnergyPoints;
}

short ClapTrap::getAttackDamage() const
{
	if (DEBUG)
		std::cout << "\ngetAttackDamage called" << std::endl;
	return AttackDamage;
}

//--------------------SETTERS--------------------

void ClapTrap::setName( const std::string & newName )
{
	if (DEBUG)
		std::cout << "setName called" << std::endl;
	name = newName;
}

void ClapTrap::setHitPoints( const short & newHitPoints )
{
	if (DEBUG)
		std::cout << "setHitPoints called" << std::endl;
	HitPoints = newHitPoints;
}

void ClapTrap::setEnergyPoints( const short & newEnergyPoints )
{
	if (DEBUG)
		std::cout << "setEnergyPoints called" << std::endl;
	EnergyPoints = newEnergyPoints;
}

void ClapTrap::setAttackDamage( const short & newAttackDamage )
{
	if (DEBUG)
		std::cout << "setAttackDamage called" << std::endl;
	AttackDamage = newAttackDamage;
}


//--------------------ACTIONS--------------------

void ClapTrap::attack(const std::string& target)
{
	short currentEnergyPoints = getEnergyPoints();

	if (target.size() == 0)
	{
		std::cout << "invalid target input!!" << std::endl;
		return;
	}
	if (currentEnergyPoints <= 0)
	{
		std::cout << "ClapTrap " << getName() << " is out of energy and can't attack!" << std::endl;
		return ;
	}
	std::cout	<< "ClapTrap " << getName() << " attacks " << target
				<< " causing " << getAttackDamage() << " points of damage!"
				<< std::endl;
	setEnergyPoints( currentEnergyPoints - 1 );
}

void ClapTrap::takeDamage(unsigned int amount)
{
	short currentHitPoints = getHitPoints();

	if (amount == 0)
	{
		std::cout << "invalid damage amount input!!" << std::endl;
		return;
	}
	if (currentHitPoints <= 0)
	{
		std::cout << "ClapTrap " << getName() << " is being hit while already DEAD!!" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << getName() << " took " << amount << " damage!" << std::endl;
	currentHitPoints -= amount;
	if (currentHitPoints <= 0)
	{
		std::cout << "Claptrap " << getName() << " is DEAD!" << std::endl;
		setHitPoints(0);
		return ;
	}
	setHitPoints(currentHitPoints);
}

void ClapTrap::beRepaired(unsigned int amount)
{
	short currentEnergyPoints = getEnergyPoints();
	short currentHitPoints = getHitPoints();

	if (amount == 0)
	{
		std::cout << "invalid repair amount input!!" << std::endl;
		return;
	}
	if (currentEnergyPoints <= 0)
	{
		std::cout << "ClapTrap " << getName() << " is out of energy and can't repair!" << std::endl;
		return ;
	}
	setEnergyPoints (currentEnergyPoints - 1);
	if (currentHitPoints + amount > 10)
	{
		std::cout << "ClapTrap " << getName() << " gains the maximum amount of Hit Points!" << std::endl;
		setHitPoints(10);
		return ;
	}
	std::cout << "ClapTrap " << getName() << " gains " << amount << "Hit Point(s)!" << std::endl;
	setHitPoints (currentHitPoints + amount);
}
