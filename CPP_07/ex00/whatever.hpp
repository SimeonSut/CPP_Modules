/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssutarmi <ssutarmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 15:52:39 by ssutarmi          #+#    #+#             */
/*   Updated: 2026/11/12 11:13:26 by ssutarmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template <typename T, typename U> void swap( T & a, U & b )
{
	T	tmp;

	tmp = a;
	a = b;
	b = tmp;
}

template <typename T> T min( T const & a, T const & b )
{
	return a > b ? b : a;
}

template <typename T> T max( T const & a, T const & b )
{
	return a > b ? a : b;
}

#endif
