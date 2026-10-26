/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssutarmi <ssutarmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 18:52:46 by ssutarmi          #+#    #+#             */
/*   Updated: 2026/10/26 21:01:57 by ssutarmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria
{
	public:

		Cure();
		Cure( std::string const & type );
		~Cure();

		AMateria* clone() const override;
		void use( ICharacter& target );

	protected:

		std::string type;

	private:
};

#endif