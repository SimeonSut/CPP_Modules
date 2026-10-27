/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssutarmi <ssutarmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/25 15:22:26 by ssutarmi          #+#    #+#             */
/*   Updated: 2026/10/27 21:35:22 by ssutarmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : type("Dog")
{
	std::cout  << type << " Default Constructor called" << std::endl;
}

Dog::Dog( Dog const & src ) : type(src.getType())
{
	std::cout  << type << " Copy Constructor called" << std::endl;
}

Dog::~Dog()
{
	std::cout  << type << " Destructor called" << std::endl;
}

Dog & Dog::operator=( const Dog & src )
{
	std::cout  << type << " Assignation overload called" << std::endl;
	setType(src.getType());
	return *this;
}

std::string Dog::getType() const
{
	if (DEBUG)
		std::cout  << type << " getType called" << std::endl;
	return type;
}

Brain & Dog::getBrain() const
{
	if (DEBUG)
		std::cout  << type << " getBrain called" << std::endl;
	return *brain;
}

void Dog::setBrain( const Brain & src )
{
	if (DEBUG)
		std::cout  << type << " setBrain called" << std::endl;
	*brain = src;
}
