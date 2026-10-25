/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssutarmi <ssutarmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/25 15:22:26 by ssutarmi          #+#    #+#             */
/*   Updated: 2026/10/25 20:26:25 by ssutarmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : type("Dog")
{
	if (DEBUG)
		std::cout  << type << " Default Constructor called" << std::endl;
}

Dog::Dog(Dog const & src ) : type(src.getType())
{
	if (DEBUG)
		std::cout  << type << " Copy Constructor called" << std::endl;
}

Dog::~Dog()
{
	if (DEBUG)
		std::cout  << type << " Destructor called" << std::endl;
}

std::string Dog::getType() const
{
	if (DEBUG)
		std::cout  << type << " getType called" << std::endl;
	return type;
}

void Dog::setType( std::string const & newType )
{
	if (DEBUG)
		std::cout  << type << " setType called" << std::endl;
	type = newType;
}
/*
void Dog::makeSound() const
{
	if (DEBUG)
		std::cout  << type << " makeSound called" << std::endl;
	std::cout  << "Woof" << std::endl;
}*/
/*
Dog &Dog::operator=( const Dog & src )
{
	if (DEBUG)
		std::cout  << type << "Assignation called" << std::endl;
}*/