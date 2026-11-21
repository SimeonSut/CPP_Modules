/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssutarmi <ssutarmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 20:21:52 by ssutarmi          #+#    #+#             */
/*   Updated: 2026/11/15 18:36:57 by ssutarmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#ifndef DEBUG
#define DEBUG 0
#endif

#include <iostream>

template <typename T>
void param_func( T & src )
{
	if (DEBUG)
		std::cout << "Before param_func its : " << src << "\n";
	src += 1;
	if (DEBUG)
		std::cout << "After param_func its : " << src << "\n\n";
}

template <typename T>
void param_func( T const & src )
{
	if (DEBUG)
		std::cout << "Overloaded param_func with const ref called, value stays at : " << src << "\n";
}

template <typename T>
void iter( T * adress, const int len, void(*fptr)(T&) )
{
	for (int i = 0; i < len; i++)
	{
		fptr(adress[i]);
	}
}

#endif