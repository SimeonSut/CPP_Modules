/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssutarmi <ssutarmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 15:29:53 by ssutarmi          #+#    #+#             */
/*   Updated: 2026/10/07 18:29:48 by ssutarmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>
#include <iostream>

class Weapon
{
	public:
		Weapon();
		Weapon( std::string name );
		~Weapon();
		void setType( const std::string newType);
		std::string	getType( void ) const;
	private:
		std::string	_type;
};

#endif