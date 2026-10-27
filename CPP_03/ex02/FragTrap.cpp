/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssutarmi <ssutarmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 19:05:45 by ssutarmi          #+#    #+#             */
/*   Updated: 2026/10/27 20:31:28 by ssutarmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

const short FragTrap::FragHitPoints;
const short FragTrap::FragEnergyPoints;
const short FragTrap::FragAttackDamage;

FragTrap::FragTrap() : ClapTrap()
{
	std::cout << "FragTrap Constructor called" << std::endl;
	setHitPoints(FragHitPoints);
	setEnergyPoints(FragEnergyPoints);
	setAttackDamage(FragAttackDamage);
}

FragTrap::FragTrap( std::string newName ) : ClapTrap( newName )
{
	std::cout << "FragTrap Constructor with newName called" << getName() << " called" << std::endl;
	setHitPoints(FragHitPoints);
	setEnergyPoints(FragEnergyPoints);
	setAttackDamage(FragAttackDamage);
}

FragTrap::FragTrap( const FragTrap & src )
{
	std::cout << "FragTrap Copy Constructor called" << std::endl;
	setName(src.getName());
	setHitPoints(src.getHitPoints());
	setEnergyPoints(src.getEnergyPoints());
	setAttackDamage(src.getAttackDamage());
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap Destructor called" << std::endl;
}

FragTrap & FragTrap::operator=( const FragTrap & src )
{
	std::cout << "FragTrap Assignement operator overload called" << std::endl;
	setName(src.getName());
	setHitPoints(src.getHitPoints());
	setEnergyPoints(src.getEnergyPoints());
	setAttackDamage(src.getAttackDamage());
	return *this;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "a positive high-fives request" << std::endl;
}
