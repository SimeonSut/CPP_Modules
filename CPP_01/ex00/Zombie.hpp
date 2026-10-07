/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 21:46:50 by marvin            #+#    #+#             */
/*   Updated: 2026/10/05 21:46:50 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

void announce( void );

class Zombie
{
	public:
		Zombie( std::string name );
		~Zombie();
		std::string get_name( void ) const;
		void announce( void );
	private:
		std::string name;
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );

#endif