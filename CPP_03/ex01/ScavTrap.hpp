/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssutarmi <ssutarmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 21:39:45 by ssutarmi          #+#    #+#             */
/*   Updated: 2026/10/27 20:00:58 by ssutarmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{

	public:

		ScavTrap();
		ScavTrap ( std::string newName );
		ScavTrap( const ScavTrap & src );
		~ScavTrap();

		ScavTrap & operator=( const ScavTrap & src );

		void attack( const std::string& target );
		void guardGate();

	private:

		static const short ScavHitPoints = 100;
		static const short ScavEnergyPoints = 50;
		static const short ScavAttackDamage = 20;

};

#endif