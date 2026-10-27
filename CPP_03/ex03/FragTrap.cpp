/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssutarmi <ssutarmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 19:05:45 by ssutarmi          #+#    #+#             */
/*   Updated: 2026/10/27 14:22:09 by ssutarmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	setHitPoints(FragHitPoints);
	setEnergyPoints(FragEnergyPoints);
	setAttackDamage(FragAttackDamage);
	std::cout << "TrapClap Constructor called" << std::endl;
}

FragTrap::FragTrap( std::string newName ) : ClapTrap ( newName )
{
	setHitPoints(FragHitPoints);
	setEnergyPoints(FragEnergyPoints);
	setAttackDamage(FragAttackDamage);	
	std::cout << "TrapClap Constructor with newName" << newName << " parameter called" << std::endl;

}

FragTrap::~FragTrap()
{
	std::cout << "TrapClap Destructor called" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "a positive high-fives request" << std::endl;
}
