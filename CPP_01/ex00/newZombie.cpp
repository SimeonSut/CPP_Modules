/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssutarmi <ssutarmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 22:48:59 by marvin            #+#    #+#             */
/*   Updated: 2026/10/07 13:48:57 by ssutarmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

//This function creates a zombie, names it, and returns it so you can use it outside
//of the function scope.
Zombie* newZombie( std::string name )
{
	return new Zombie(name);
}
