/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 21:46:48 by marvin            #+#    #+#             */
/*   Updated: 2026/10/05 21:46:48 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie( void )
{}

Zombie::Zombie(std::string new_name) : name(new_name)
{}

Zombie::~Zombie( void )
{}

void Zombie::setName( std::string name )
{
	this->name = name;
}

std::string Zombie::getName( void ) const
{
	return Zombie::name;
}

void Zombie::announce( void )
{
	std::cout << getName() << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
