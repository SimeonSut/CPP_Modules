/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssutarmi <ssutarmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 18:25:57 by ssutarmi          #+#    #+#             */
/*   Updated: 2026/10/22 21:32:27 by ssutarmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/********TO ENABLE DEBUGING MODE, COMPILE WITH THE COMMAND BELOW***********
* c++ -Wall -Wextra -Werror -D DEBUG=1 -std=c++98
******************************************************************************/

int	main(void)
{
	std::cout	<< "----------ClapTrap tests launched !!!----------\n\n"
				<< "----------Claptraps declarations tests!----------\n\n";

	ClapTrap a;
	ClapTrap b;
	ClapTrap c("Jean-Paul Sartre");

	std::cout	<< "\n----------Claptrap actions tests!!----------\n\n";
	c.attack("b");
	c.takeDamage(5);
	c.takeDamage(1);
	c.beRepaired(2);
	c.takeDamage(7);
	b.takeDamage(0);
	std::cout << std::endl;

	return 0;
}
