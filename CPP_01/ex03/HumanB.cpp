/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssutarmi <ssutarmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 15:29:47 by ssutarmi          #+#    #+#             */
/*   Updated: 2026/10/07 18:33:02 by ssutarmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(const std::string &newName) : _name(newName)
{}

HumanB::~HumanB()
{}

std::string HumanB::getName( void ) const
{
	return _name;
}

void HumanB::setWeapon(Weapon &newWeapon)
{
	WeaponB = &newWeapon;
}

void HumanB::attack( void ) const
{
	std::cout	<< getName()
				<< " attacks with their "
				<< WeaponB->getType()
				<< std::endl;
}
