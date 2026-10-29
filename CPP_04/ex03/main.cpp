/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssutarmi <ssutarmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 17:57:21 by ssutarmi          #+#    #+#             */
/*   Updated: 2026/10/29 14:57:02 by ssutarmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "AMateria.hpp"
//#include "IMateriaSource.hpp"
//#include "ICharacters.hpp"
#include "MateriaSource.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int main(void)
{
	IMateriaSource* src = new MateriaSource();
	Ice bolt;
	Cure antidote;
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("Maximus Decimus Meridious, Commander of the Armies of the North, General of the spanic legions, husband to a murdered wife, father to a murdered son, servant of the true Emperor Marcus Aurelius");
	AMateria* tmp;
//	AMateria* tmp2;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = bolt.clone();
	me->equip(tmp);
	tmp = antidote.clone();
	me->equip(tmp);
	// tmp = src->createMateria("ice");
	// me->equip(tmp);
	ICharacter* bob = new Character("bob");
	for (short i = -2; i < 8; i++)
		me->use(i, *bob);
	std::cout << me->getName() << std::endl;
	tmp = antidote.clone();
	me->equip(tmp);
	me->unequip(0);
	me->use(0, *bob);
	bolt.use(*bob);
	antidote.use(*bob);
	delete bob;
	delete me;
	delete src;
	return 0;
}
