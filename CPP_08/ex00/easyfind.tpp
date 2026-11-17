/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssutarmi <ssutarmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/16 19:14:38 by ssutarmi          #+#    #+#             */
/*   Updated: 2026/11/17 21:55:12 by ssutarmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "easyfind.hpp"

template <typename T>
void easyfind( T first, int second )
{
	typename T::iterator it = find(first.begin(), first.end(), second);

	if (it == first.end())
	{
		throw std::invalid_argument("No such number found!");
		return ;
	}
	std::cout << "Found on index " << std::distance(first.begin(), it) << std::endl;
}
