/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssutarmi <ssutarmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 18:52:48 by ssutarmi          #+#    #+#             */
/*   Updated: 2026/10/26 21:01:31 by ssutarmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria
{
	public:

		Ice();
		Ice( std::string const & type );
		~Ice();

		AMateria* clone() const override;
		void use( ICharacter& target );

	protected:

		std::string type;

	private:
};

#endif