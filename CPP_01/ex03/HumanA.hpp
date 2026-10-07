/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssutarmi <ssutarmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 15:29:55 by ssutarmi          #+#    #+#             */
/*   Updated: 2026/10/07 17:15:34 by ssutarmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
	public:
		HumanA( const std::string &newName, Weapon &newWeapon );
		~HumanA();
		std::string getName( void );
		void attack( void );
	private:	
		std::string _name;
		Weapon &WeaponA;
};

#endif