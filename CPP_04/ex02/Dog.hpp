/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssutarmi <ssutarmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/25 15:22:28 by ssutarmi          #+#    #+#             */
/*   Updated: 2026/10/26 17:17:23 by ssutarmi         ###   ########.fr       */
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

		virtual std::string getType() const;
		Brain & getBrain() const;
		virtual void setType( std::string const & newType );
		void setBrain( const Brain & src );

		Dog & operator=( const Dog & src );

	protected:

		std::string type;

	private:

		Brain * brain;

};

#endif