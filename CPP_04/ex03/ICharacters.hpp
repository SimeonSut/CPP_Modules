/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacters.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssutarmi <ssutarmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 18:03:27 by ssutarmi          #+#    #+#             */
/*   Updated: 2026/10/28 20:48:58 by ssutarmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
#define ICHARACTER_HPP

#include <iostream>
#include "AMateria.hpp"

class ICharacter
{
	public:

		virtual ~ICharacter() {};
		virtual std::string const & getName() const = 0;
		virtual void equip( AMateria * m ) = 0;
		virtual void unequip( int idx ) = 0;
		virtual void use( int idx, ICharacter & target ) = 0;

	protected:
	private:
};

#endif