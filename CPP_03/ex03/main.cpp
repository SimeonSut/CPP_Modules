/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssutarmi <ssutarmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 18:25:57 by ssutarmi          #+#    #+#             */
/*   Updated: 2026/10/27 21:05:05 by ssutarmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

/********TO ENABLE DEBUGING MODE, COMPILE WITH THE COMMAND BELOW***********
* c++ -Wall -Wextra -Werror -D DEBUG=1 -std=c++98
******************************************************************************/

int	main(void)
{
	std::cout	<< "----------ClapTrap tests launched !!!----------\n\n"
				<< "----------Claptraps declarations tests!----------\n\n";
	ClapTrap a;
	std::cout	<< "\n----------Claptrap actions tests!!----------\n\n";
	a.takeDamage(5);
	std::cout	<< "\n----------Scavtrap actions tests!!----------\n\n";
	ScavTrap b("Billy Boy");
	ScavTrap c("Victor Hugo");
	b = c;
	ScavTrap d(b);
	d.guardGate();
	b.guardGate();
	c.attack("That guy");
	c.attack("");
	c.takeDamage(57);
	c.takeDamage(57);
	c.guardGate();
	std::cout	<< "\n----------Fragtrap actions tests!!----------\n\n";
	FragTrap	e;
	FragTrap	f("Luke Skywalker");
	FragTrap	g(f);
	FragTrap	h;
	h = g;
	e.highFivesGuys();
	f.highFivesGuys();
	g.highFivesGuys();
	h.highFivesGuys();
	e.takeDamage(100);
	f.attack(g.getName());
	std::cout	<< "\n----------DiamondTrap actions tests!!----------\n\n";
	DiamondTrap alpha;
	DiamondTrap beta("Dart Vader");
	alpha.whoAmI();
	alpha.takeDamage(100);
	alpha.beRepaired(15);
	alpha.attack("Emperor Palpatine");
	alpha.attack("Emperor Palpatine");
	alpha.attack("Emperor Palpatine");
	alpha.attack("Emperor Palpatine");
	alpha.attack("Emperor Palpatine");
	alpha.attack("Emperor Palpatine");
	alpha.attack(beta.getClapName());
	alpha.attack(beta.getName());
	alpha.setClapName("Darth Malgus");
	alpha.whoAmI();
	std::cout << std::endl;
	return 0;
}