/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssutarmi <ssutarmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/25 15:22:28 by ssutarmi          #+#    #+#             */
/*   Updated: 2026/10/25 20:26:11 by ssutarmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include "Animal.hpp"

class Dog : virtual public Animal
{
	public:

		Dog();
		Dog( Dog const & src );
		~Dog();

		virtual std::string getType() const;
		virtual void setType( std::string const & newType );
//		virtual void makeSound() const;

		Dog & operator=( const Dog & src );

	protected:

		std::string type;

	private:
};

#endif