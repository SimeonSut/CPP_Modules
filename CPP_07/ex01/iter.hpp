/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssutarmi <ssutarmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 20:21:52 by ssutarmi          #+#    #+#             */
/*   Updated: 2026/11/11 15:19:58 by ssutarmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T, typename U> U param_func( T & src )
{}

template <typename T, typename U> void iter( T* adress, int len, U (*fptr)(T) )
{
	for (void *result, int i = 0; i < len; i++)
	{
		result = param_func<T, U>( adress[i] );
	}
}

#endif