/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/08 18:44:21 by marvin            #+#    #+#             */
/*   Updated: 2026/11/08 18:44:21 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int	main(void)
{
	Base*	test1;
	Base*	test2;
	Base*	test3;
	Base*	test4;

	test1 = generate();
	test2 = generate();
	test3 = generate();
	test4 = generate();

	Base&	ref1 = *test1;
	Base&	ref2 = *test2;
	Base&	ref3 = *test3;
	Base&	ref4 = *test4;

	std::cout << "Pointer tests : \n";

	identify(test1);
	identify(test2);
	identify(test3);
	identify(test4);

	std::cout << "References tests : \n";

	identify(ref1);
	identify(ref2);
	identify(ref3);
	identify(ref4);

	return 0;
}
