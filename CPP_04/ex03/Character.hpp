/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssutarmi <ssutarmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 21:08:21 by ssutarmi          #+#    #+#             */
/*   Updated: 2026/10/29 15:58:19 by ssutarmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "AMateria.hpp"
#include "ICharacters.hpp"

typedef struct colector
{
	AMateria 			*garbage;
	struct colector		*next;
}						t_colector;

class Character : public ICharacter
{
	public:

		Character();
		Character( Character const & src );
		Character( std::string const & newName );
		~Character();

		Character & operator=( Character const & src );

		std::string const & getName() const;
		void equip( AMateria * m );
		void unequip( int idx );
		void use( int idx, ICharacter & target );

	protected:

		AMateria* 	inventory[4];
		t_colector*	garbage_head;
		t_colector*	garbage_colector;

	private:

		std::string name;

};

#endif