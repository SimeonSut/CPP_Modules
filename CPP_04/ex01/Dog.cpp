/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssutarmi <ssutarmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/25 15:22:26 by ssutarmi          #+#    #+#             */
/*   Updated: 2026/10/27 14:28:27 by ssutarmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : type("Dog"), brain(new Brain())
{
	std::cout  << type << " Default Constructor called" << std::endl;
}

Dog::Dog(Dog const & src ) : type(src.getType()), brain(new Brain(src.getBrain()))
{
	std::cout  << type << " Copy Constructor called" << std::endl;
}

Dog::~Dog()
{
	std::cout  << type << " Destructor called" << std::endl;
	delete brain;
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

void Dog::setType( std::string const & newType )
{
	if (DEBUG)
		std::cout  << type << " setType called" << std::endl;
	type = newType;
}

void Dog::setBrain( const Brain & src )
{
	if (DEBUG)
		std::cout  << type << " setBrain called" << std::endl;
	*brain = src;
}
