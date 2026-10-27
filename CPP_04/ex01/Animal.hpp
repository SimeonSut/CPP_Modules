/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssutarmi <ssutarmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/25 14:36:02 by ssutarmi          #+#    #+#             */
/*   Updated: 2026/10/27 21:28:57 by ssutarmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#ifndef DEBUG
#define DEBUG 0
#endif

#include <iostream>
#include "Brain.hpp"

class Animal
{
	public:

		Animal();
		Animal( Animal const & src );
		virtual ~Animal();

		Animal & operator=( const Animal & src );

		virtual std::string getType() const;
		void makeSound() const;


	protected:

		virtual void setType( std::string const & newType );
		std::string type;

	private:
};

#endif