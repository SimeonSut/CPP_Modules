/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssutarmi <ssutarmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 18:52:48 by ssutarmi          #+#    #+#             */
/*   Updated: 2026/10/29 13:42:44 by ssutarmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"
#include "ICharacters.hpp"

class Ice : virtual public AMateria
{
	public:

		Ice();
		Ice( Ice const & src );
		Ice( std::string const & newType );
		~Ice();

		Ice & operator=( Ice const & src );

		AMateria* clone() const;
		void use( ICharacter& target );

	protected:
	private:
};

#endif