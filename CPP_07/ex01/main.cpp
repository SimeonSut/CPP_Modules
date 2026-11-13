/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssutarmi <ssutarmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 20:21:48 by ssutarmi          #+#    #+#             */
/*   Updated: 2026/11/13 21:24:42 by ssutarmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

template void param_func( T, T)
{}

int	main(void)
{
	char		*cptr = "Hello World!";
	int			iptr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	bool		bptr[10] = {false, false, false, false, false, false, false, false, false, false};
	std::string sptr[10] = {"Hi", "Hi", "Hi", "Hi", "Hi", "Hi", "Hi", "Hi", "Hi", "Hi"};

	iter<char *>(cptr, 13, &param_func);
	return 0;
}