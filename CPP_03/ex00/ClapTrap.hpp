/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssutarmi <ssutarmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 18:26:00 by ssutarmi          #+#    #+#             */
/*   Updated: 2026/10/22 21:21:35 by ssutarmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

#ifndef DEBUG
# define DEBUG 0
#endif

class ClapTrap
{
	public:

		ClapTrap();
		ClapTrap( std::string newName );
		ClapTrap( const ClapTrap & src );
		~ClapTrap();

		ClapTrap & operator=( const ClapTrap & src );

//--------------------GETTERS--------------------
		
		std::string getName() const;
		short getHitPoints() const;
		short getEnergyPoints() const;
		short getAttackDamage() const;

//--------------------SETTERS--------------------

		void setName( const std::string & newName );
		void setHitPoints( const short & newHitPoints );
		void setEnergyPoints( const short & newEnergyPoints );
		void setAttackDamage( const short & newAttackDamage );

//--------------------ACTIONS--------------------

		void attack( const std::string& target );
		void takeDamage( unsigned int amount );
		void beRepaired( unsigned int amount );

	protected:
	private:

		std::string name;
		short HitPoints;
		short EnergyPoints;
		short AttackDamage;

};

#endif