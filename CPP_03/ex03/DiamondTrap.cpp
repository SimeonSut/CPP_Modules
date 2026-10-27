/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssutarmi <ssutarmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 19:57:48 by ssutarmi          #+#    #+#             */
/*   Updated: 2026/10/27 20:51:46 by ssutarmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap(), ScavTrap(), FragTrap(), name(ClapTrap::getName())
{
	std::cout << "DiamondTrap Constructor called" << std::endl;
	setClapName(name);
	setHitPoints(FragHitPoints);
	setEnergyPoints(ScavEnergyPoints);
	setAttackDamage(FragAttackDamage);
}

DiamondTrap::DiamondTrap( std::string newName ) : ClapTrap( newName ), ScavTrap( newName ), FragTrap( newName ), name(newName)
{
	std::cout << "DiamondTrap Constructor with newName parameter called" << std::endl;
	setClapName(name);
	setHitPoints(FragHitPoints);
	setEnergyPoints(ScavEnergyPoints);
	setAttackDamage(FragAttackDamage);
}

DiamondTrap::DiamondTrap( const DiamondTrap & src )
{
	std::cout << "DiamondTrap Copy Constructor called" << std::endl;
	setName(src.getName());
	setHitPoints(src.getHitPoints());
	setEnergyPoints(src.getEnergyPoints());
	setAttackDamage(src.getAttackDamage());
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap Destructor called" << std::endl;
}

DiamondTrap & DiamondTrap::operator=( const DiamondTrap & src )
{
	std::cout << "DiamondTrap Assignement operator overload called" << std::endl;
	setName(src.getName());
	setHitPoints(src.getHitPoints());
	setEnergyPoints(src.getEnergyPoints());
	setAttackDamage(src.getAttackDamage());
	return *this;
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
	if (DEBUG)
		std::cout << "DiamondTrap attack function called" << std::endl;
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
	std::cout << "name is " << name << "\n";
	std::cout << "Clapname is " << getClapName() << std::endl;
}
