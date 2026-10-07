/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssutarmi <ssutarmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 13:26:43 by ssutarmi          #+#    #+#             */
/*   Updated: 2026/10/07 13:45:45 by ssutarmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

//This function creates a zombie, names it, and makes it announce itself.
void randomChump( std::string name )
{
	Zombie	newZombie(name);

	newZombie.announce();
}
