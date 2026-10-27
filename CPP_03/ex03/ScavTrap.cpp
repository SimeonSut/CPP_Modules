/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssutarmi <ssutarmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 21:39:51 by ssutarmi          #+#    #+#             */
/*   Updated: 2026/10/27 14:22:19 by ssutarmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	setHitPoints(ScavHitPoints);
	setEnergyPoints(ScavEnergyPoints);
	setAttackDamage(ScavAttackDamage);
	std::cout << "ScavTrap Constructor called" << std::endl;
}

ScavTrap::ScavTrap( std::string newName ) : ClapTrap( newName )
{
	setHitPoints(ScavHitPoints);
	setEnergyPoints(ScavEnergyPoints);
	setAttackDamage(ScavAttackDamage);
	std::cout << "ScavTrap Constructor with newName " << getName() << " called" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Destructor called" << std::endl;
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
