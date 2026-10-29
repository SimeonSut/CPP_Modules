/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssutarmi <ssutarmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 18:52:46 by ssutarmi          #+#    #+#             */
/*   Updated: 2026/10/29 13:42:48 by ssutarmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"
#include "ICharacters.hpp"

class Cure : virtual public AMateria
{
	public:

		Cure();
		Cure( Cure const & src );
		Cure( std::string const & newType );
		~Cure();

		Cure & operator=( Cure const & src );

		AMateria* clone() const;
		void use( ICharacter& target );

	protected:
	private:
};

#endif