/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssutarmi <ssutarmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/25 15:22:24 by ssutarmi          #+#    #+#             */
/*   Updated: 2026/10/27 21:35:19 by ssutarmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : type("Cat")
{
	std::cout  << type << " Default Constructor called" << std::endl;
}

Cat::Cat( Cat const & src ) : type(src.getType())
{
	std::cout  << type << " Copy Constructor called" << std::endl;
}

Cat::~Cat()
{
	std::cout  << type << " Destructor called" << std::endl;
}

Cat & Cat::operator=( const Cat & src )
{
	std::cout  << type << " Assignation overload called" << std::endl;
	setType(src.getType());
	return *this;
}

std::string Cat::getType() const
{
	if (DEBUG)
		std::cout  << type << " getType called" << std::endl;
	return type;
}

Brain & Cat::getBrain() const
{
	if (DEBUG)
		std::cout  << type << " getBrain called" << std::endl;
	return *brain;
}

void Cat::setBrain( const Brain & src )
{
	if (DEBUG)
		std::cout  << type << " setBrain called" << std::endl;
	*brain = src;
}
