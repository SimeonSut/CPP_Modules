/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssutarmi <ssutarmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 15:29:51 by ssutarmi          #+#    #+#             */
/*   Updated: 2026/10/07 18:30:55 by ssutarmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
	public:
		HumanB( const std::string &newName );
		~HumanB();
		std::string getName( void ) const;
		void setWeapon( Weapon &newWeapon );
		void attack( void ) const;
	private:
		std::string _name;
		Weapon *WeaponB;
};

#endif