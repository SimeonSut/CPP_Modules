/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssutarmi <ssutarmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 19:57:48 by ssutarmi          #+#    #+#             */
/*   Updated: 2026/10/27 14:21:55 by ssutarmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap(), ScavTrap(), FragTrap(), name(ClapTrap::getName())
{
	setClapName(name);
	setHitPoints(FragHitPoints);
	setEnergyPoints(ScavEnergyPoints);
	setAttackDamage(FragAttackDamage);
	std::cout << "DiamondTrap Constructor called" << std::endl;
}

DiamondTrap::DiamondTrap( const std::string & newName ) : ClapTrap( newName ), ScavTrap( newName ), FragTrap( newName ), name(newName)
{
	setClapName(name);
	setHitPoints(FragHitPoints);
	setEnergyPoints(ScavEnergyPoints);
	setAttackDamage(FragAttackDamage);
	std::cout << "DiamondTrap Constructor with newName parameter called" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap Destructor called" << std::endl;
}

void DiamondTrap::setClapName( std::string newName )
{
	if (DEBUG)
		std::cout << "DiamondTrap setClapName called" << std::endl;
	newName.append("_clap_name");
	ClapTrap::setName(newName);
}

std::string DiamondTrap::getClapName() const
{
	if (DEBUG)
		std::cout << "DiamondTrap getClapName called" << std::endl;
	return ClapTrap::getName();
}

void DiamondTrap::attack( const std::string& target )
{
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
	std::cout << "name is " << name << "\n";
	std::cout << "Clapname is " << getClapName() << std::endl;
}
