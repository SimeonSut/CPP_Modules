/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 22:48:40 by marvin            #+#    #+#             */
/*   Updated: 2026/10/06 22:48:40 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

//This function creates a zombie, names it, and makes it announce itself.
void randomChump( std::string name )
{
	Zombie	*newZombie;

	newZombie = new Zombie(name);
	newZombie->announce();
	delete newZombie;
}