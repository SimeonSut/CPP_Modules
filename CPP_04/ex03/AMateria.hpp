/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssutarmi <ssutarmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 17:57:19 by ssutarmi          #+#    #+#             */
/*   Updated: 2026/10/26 20:43:05 by ssutarmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include "Cure.hpp"
#include "Ice.hpp"
#include "ICharacters.hpp"
#include "IMateriaSource.hpp"

#ifndef DEBUG
#define DEBUG 0
#endif

class AMateria
{
	public:

		AMateria();
		AMateria( std::string const & type );
		~AMateria();

		std::string const & getType() const;
//		void setType( std::string const & type );

		AMateria & operator=( AMateria const & src );

		virtual AMateria* clone() const = 0;
		virtual void use( ICharacter& target );

	protected:

		std::string type;

	private:
};

#endif