/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssutarmi <ssutarmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 19:57:47 by ssutarmi          #+#    #+#             */
/*   Updated: 2026/10/27 20:50:52 by ssutarmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
	public:

		DiamondTrap();
		DiamondTrap ( std::string newName );
		DiamondTrap( const DiamondTrap & src );
		~DiamondTrap();

		DiamondTrap & operator=( const DiamondTrap & src );

		void setClapName( std::string newName );
		std::string getClapName() const;

		void attack( const std::string& target );
		void whoAmI();

	private:
		std::string name;
};

#endif