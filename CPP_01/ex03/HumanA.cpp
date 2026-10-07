/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssutarmi <ssutarmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 15:29:49 by ssutarmi          #+#    #+#             */
/*   Updated: 2026/10/07 18:19:34 by ssutarmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA( const std::string &newName, Weapon &newWeapon ) : _name(newName), WeaponA(newWeapon)
{}

HumanA::~HumanA()
{}

std::string HumanA::getName( void )
{
	return _name;
}

void HumanA::attack( void )
{
	std::cout	<< getName()
				<< " attacks with their "
				<< WeaponA.getType()
				<< std::endl;
}
