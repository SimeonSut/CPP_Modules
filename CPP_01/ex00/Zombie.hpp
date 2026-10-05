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

#include "string"

class Zombie
{
	public:
		Zombie( std::string name );
		~Zombie();
		std::string getName( void );
	private:
		std::string name;
}