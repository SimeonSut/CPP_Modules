/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssutarmi <ssutarmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 13:26:40 by ssutarmi          #+#    #+#             */
/*   Updated: 2026/10/07 13:44:14 by ssutarmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

//This function creates a zombie, names it, and returns it so you can use it outside
//of the function scope.
Zombie* newZombie( std::string name )
{
	return new Zombie(name);
}
