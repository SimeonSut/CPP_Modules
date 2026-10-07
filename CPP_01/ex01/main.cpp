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
	Zombie	*newHorde;

	newHorde = zombieHorde(5, "Vincents");
	for (int i = 0; i <= 4; i++)
		newHorde[i].announce();
	delete [] newHorde;
	return 0;
}