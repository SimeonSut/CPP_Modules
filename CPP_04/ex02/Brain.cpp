/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssutarmi <ssutarmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 12:18:43 by ssutarmi          #+#    #+#             */
/*   Updated: 2026/10/27 14:30:22 by ssutarmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout  << " Brain Default Constructor called" << std::endl;
	for (short i = 0; i < 100; i++)
		ideas[i] = "No more ideas in that little Brain";
}

Brain::Brain( Brain const & src )
{
	std::cout  << " Brain Copy Constructor called" << std::endl;
	for (short i = 0; i < 100; i++)
		ideas[i] = src.ideas[i];
}

void Brain::sayIdeas()
{
	for (short i = 0; i < 100; i++)
		std::cout << ideas[i] << "\n";
	std::cout << std::endl;
}

void Brain::setIdea( std::string idea )
{
	for (short i = 0; i < 100 ; i++)
	{
		if (ideas[i].compare("No more ideas in that little Brain") == 0)
		{
			ideas[i] = idea ;
			break ;
		}
	}
}

Brain::~Brain()
{
	std::cout  << " Brain Destructor called" << std::endl;
}

Brain & Brain::operator=( Brain const & src )
{
	for (short i = 0; i < 100; i++)
		ideas[i] = src.ideas[i];
	return *this;
}
