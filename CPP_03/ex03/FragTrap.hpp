/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssutarmi <ssutarmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 19:05:44 by ssutarmi          #+#    #+#             */
/*   Updated: 2026/10/27 20:47:28 by ssutarmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	public:

		FragTrap();
		FragTrap ( std::string newName );
		FragTrap( const FragTrap & src );
		~FragTrap();

		FragTrap & operator=( const FragTrap & src );

		void highFivesGuys(void);

	protected:

		static const short FragHitPoints = 100;
		static const short FragEnergyPoints = 100;
		static const short FragAttackDamage = 30;

};

#endif