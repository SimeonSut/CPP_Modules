/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 21:46:46 by marvin            #+#    #+#             */
/*   Updated: 2026/10/05 21:46:46 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie	*Zombie_ptr;

	randomChump("one");
	Zombie_ptr = newZombie("two");
	Zombie_ptr->announce();
	delete Zombie_ptr;
	Zombie_ptr = zombieHorde(i, "Vincents");
	for (int i = 4; i >= 0; i--)
		Zombie_ptr[i]->annnounce();
	return 0;
}