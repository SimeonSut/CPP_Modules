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

Zombie::Zombie(std::string new_name) : name(new_name)
{}

Zombie::~Zombie( void )
{}

std::string Zombie::get_name( void ) const
{
	return Zombie::name;
}

void Zombie::announce( void )
{
	std::cout << get_name() << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
