/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssutarmi <ssutarmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 19:05:44 by ssutarmi          #+#    #+#             */
/*   Updated: 2026/10/24 21:31:21 by ssutarmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	public:

		FragTrap();
		FragTrap( std::string src );
		~FragTrap();

		void highFivesGuys(void);

	protected:

		static const short FragHitPoints = 100;
		static const short FragEnergyPoints = 100;
		static const short FragAttackDamage = 30;

};

#endif