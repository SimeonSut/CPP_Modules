/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssutarmi <ssutarmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/25 14:36:04 by ssutarmi          #+#    #+#             */
/*   Updated: 2026/10/27 14:29:58 by ssutarmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

Animal::Animal() : type("Animal")
{
	std::cout  << type << " Default Constructor called" << std::endl;
}

Animal::Animal( Animal const & src ) : type(src.getType())
{
	std::cout  << type << " Copy Constructor called" << std::endl;
}

Animal::~Animal()
{
	std::cout  << type << " Destructor called" << std::endl;
}

std::string Animal::getType() const
{
	if (DEBUG)
		std::cout  << type << " getType called" << std::endl;
	return type;
}

void Animal::setType( std::string const & newType )
{
	if (DEBUG)
		std::cout  << type << " setType called" << std::endl;
	type = newType;
}

void Animal::makeSound() const
{
	if (DEBUG)
		std::cout  << type << " makeSound called " << std::endl;

	if (getType().compare("Animal") == 0)
		std::cout  << "weird sounds" << std::endl;
	else if (getType().compare("Cat") == 0)
		std::cout  << "Meow" << std::endl;
	else if (getType().compare("Dog") == 0)
		std::cout  << "Woof" << std::endl;
}

Animal & Animal::operator=( const Animal & src )
{
	if (DEBUG)
		std::cout  << type << " Assignation overload called" << std::endl;
	setType(src.getType());
	return *this;
}
