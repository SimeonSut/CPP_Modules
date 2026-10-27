/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssutarmi <ssutarmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/25 15:22:24 by ssutarmi          #+#    #+#             */
/*   Updated: 2026/10/27 14:25:49 by ssutarmi         ###   ########.fr       */
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

std::string Cat::getType() const
{
	if (DEBUG)
		std::cout  << type << " getType called" << std::endl;
	return type;
}

void Cat::setType( std::string const & newType )
{
	if (DEBUG)
		std::cout  << type << " setType called" << std::endl;
	type = newType;
}
