/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssutarmi <ssutarmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/25 14:33:52 by ssutarmi          #+#    #+#             */
/*   Updated: 2026/10/27 21:19:33 by ssutarmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main(void)
{
	const Animal*	meta = new Animal();
	const Animal*	j = new Dog();
	const Animal*	i = new Cat();
	const Animal*	k = new Dog();
	Animal*			l = new Cat();

	*l = *k;
	std::cout << "\nThe types of the objects in order are : \n\n";
	std::cout << meta->getType() << "\n";
	std::cout << j->getType() << "\n";
	std::cout << i->getType() << "\n";
	std::cout << k->getType() << "\n";
	std::cout << l->getType() << "\n";

	std::cout << "\nThe types of the objects in order are : \n\n";
	meta->makeSound();
	j->makeSound();
	i->makeSound();
	k->makeSound();
	l->makeSound();
	std::cout << std::endl;
	return 0;
}
