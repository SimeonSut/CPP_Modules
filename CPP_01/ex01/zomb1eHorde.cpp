/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zomb1eHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 23:05:24 by marvin            #+#    #+#             */
/*   Updated: 2026/10/06 23:05:24 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	Zombie *newHorde;

	newHorde = new Zombie[N];
	for (N; N >= 0; N--)
		newHorde[N] = newZombie(name);
	return newHorde;
}
