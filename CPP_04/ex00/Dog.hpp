/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssutarmi <ssutarmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/25 15:22:28 by ssutarmi          #+#    #+#             */
/*   Updated: 2026/10/27 21:20:17 by ssutarmi         ###   ########.fr       */
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

		Dog & operator=( const Dog & src );

		virtual std::string getType() const;

	protected:

		std::string type;

	private:
};

#endif