/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssutarmi <ssutarmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 18:26:00 by ssutarmi          #+#    #+#             */
/*   Updated: 2026/10/27 17:38:00 by ssutarmi         ###   ########.fr       */
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

//--------------------ACTIONS--------------------

		void attack( const std::string& target );
		void takeDamage( unsigned int amount );
		void beRepaired( unsigned int amount );

	protected:

	//--------------------SETTERS--------------------

		void setName( const std::string & newName );
		void setHitPoints( const short & newHitPoints );
		void setEnergyPoints( const short & newEnergyPoints );
		void setAttackDamage( const short & newAttackDamage );

		std::string name;
		short HitPoints;
		short EnergyPoints;
		short AttackDamage;

	private:

		static const short ClapHitPoints = 100;
		static const short ClapEnergyPoints = 100;
		static const short ClapAttackDamage = 30;

};

#endif