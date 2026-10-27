/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssutarmi <ssutarmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/25 15:22:28 by ssutarmi          #+#    #+#             */
/*   Updated: 2026/10/27 21:40:11 by ssutarmi         ###   ########.fr       */
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
		virtual ~Dog();

		Dog & operator=( const Dog & src );

		virtual std::string getType() const;
		Brain & getBrain() const;

	protected:

		void setBrain( const Brain & src );
		std::string type;

	private:

		Brain * brain;

};

#endif