/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssutarmi <ssutarmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 21:39:51 by ssutarmi          #+#    #+#             */
/*   Updated: 2026/10/27 20:45:44 by ssutarmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "ScavTrap Constructor called" << std::endl;
	setHitPoints(ScavHitPoints);
	setEnergyPoints(ScavEnergyPoints);
	setAttackDamage(ScavAttackDamage);
}

ScavTrap::ScavTrap( std::string newName ) : ClapTrap( newName )
{
	std::cout << "ScavTrap Constructor with newName called" << getName() << " called" << std::endl;
	setHitPoints(ScavHitPoints);
	setEnergyPoints(ScavEnergyPoints);
	setAttackDamage(ScavAttackDamage);
}

ScavTrap::ScavTrap( const ScavTrap & src )
{
	std::cout << "ScavTrap Copy Constructor called" << std::endl;
	setName(src.getName());
	setHitPoints(src.getHitPoints());
	setEnergyPoints(src.getEnergyPoints());
	setAttackDamage(src.getAttackDamage());
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Destructor called" << std::endl;
}

ScavTrap & ScavTrap::operator=( const ScavTrap & src )
{
	std::cout << "ScavTrap Assignement operator overload called" << std::endl;
	setName(src.getName());
	setHitPoints(src.getHitPoints());
	setEnergyPoints(src.getEnergyPoints());
	setAttackDamage(src.getAttackDamage());
	return *this;
}

void ScavTrap::attack(const std::string& target)
{
	short currentEnergyPoints = getEnergyPoints();

	if (DEBUG)
		std::cout << "\n\n Energy points check is " << currentEnergyPoints << "\n\n" << std::endl;
	if (currentEnergyPoints <= 0)
	{
		std::cout << "ScavTrap " << getName() << " is out of energy and can't attack!" << std::endl;
		return ;
	}
	std::cout	<< "ScavTrap " << getName() << " attacks " << target
				<< " causing " << getAttackDamage() << " points of damage!"
				<< std::endl;
	setEnergyPoints( currentEnergyPoints - 1 );
}

void ScavTrap::guardGate()
{
	std::cout << getName() << "is now in Gate keeper mode" << std::endl;
}
