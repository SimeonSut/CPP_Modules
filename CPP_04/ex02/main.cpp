/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssutarmi <ssutarmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/25 14:33:52 by ssutarmi          #+#    #+#             */
/*   Updated: 2026/10/26 17:54:48 by ssutarmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int main(void)
{

//-----------------------Brain TESTS-----------------------
	Brain *	a = new Brain();
	Brain *	b = new Brain();

	std::cout << "-----A Ideas-----\n\n";
	a->setIdea("Hello World!");
	a->setIdea("Hello World!");
	a->setIdea("Hello World!");
	a->setIdea("Hello World!");
	a->setIdea("Hello World!");
	a->setIdea("Hello World!");
	a->sayIdeas();
	std::cout << "-----B Ideas-----\n\n";
	b->setIdea("Hello World!");
	b->setIdea("Hello World!");
	b->setIdea("Hello World!");
	b->setIdea("Hello World!");
	b->setIdea("Hello World!");
	b->setIdea("Hello World!");
	b->sayIdeas();
//	Brain * c(b);
	Brain * c = new Brain(*b);
	Brain * d = new Brain();
	*d = *b;
	std::cout << "-----C Ideas-----\n\n";
	c->sayIdeas();
	std::cout << "-----D Ideas-----\n\n";
	delete a;
	delete b;
	std::cout << "-----C Ideas after deletion of B-----\n\n";
	c->sayIdeas();
	std::cout << "-----D Ideas after deletion of B-----\n\n";
	d->sayIdeas();
	std::cout << "-----Cat tests-----\n\n";
	delete c;
	delete d;

//-----------------------ANIMALS ARRAY TESTS-----------------------
	Animal* array[10];

	for (short i = 0; i < 10; i++)
	{
		if (i < 5)
			array[i] = new Cat();
		else
			array[i] = new Dog();
	}
	for (short i = 0; i < 10; i++)
	{
		array[i]->makeSound();
		delete array[i];
	}
//	Animal one;
	return 0;
}
