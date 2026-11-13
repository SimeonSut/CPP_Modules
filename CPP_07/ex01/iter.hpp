/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssutarmi <ssutarmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 20:21:52 by ssutarmi          #+#    #+#             */
/*   Updated: 2026/11/13 18:57:01 by ssutarmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T> void param_func( T & src, T & add )
{
	src += add;
}

template <typename T> void iter( T* adress, int len, void(*fptr)(T) )
{
	for (int i = 0; i < len; i++)
		*fptr(adress[i]);
}

#endif