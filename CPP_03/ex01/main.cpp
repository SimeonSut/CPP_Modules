/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssutarmi <ssutarmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 18:25:57 by ssutarmi          #+#    #+#             */
/*   Updated: 2026/10/27 20:07:14 by ssutarmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

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
	std::cout << std::endl;

	return 0;
}