/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssutarmi <ssutarmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 17:57:19 by ssutarmi          #+#    #+#             */
/*   Updated: 2026/10/28 23:41:09 by ssutarmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>

#ifndef DEBUG
#define DEBUG 0
#endif

class ICharacter;

class AMateria
{
	public:

		AMateria();
		AMateria( std::string const & type );
		virtual ~AMateria();

		AMateria & operator=( AMateria const & src );

		std::string const & getType() const;

		virtual AMateria* clone() const = 0;
		virtual void use( ICharacter & target );

	protected:

		std::string type;

	private:
};

#endif