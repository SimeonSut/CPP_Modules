/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 17:37:06 by ssutarmi          #+#    #+#             */
/*   Updated: 2026/11/08 18:36:14 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialize.hpp"

int	main(void)
{
	Data		one;
	Data		*two;
	std::string input("asdfasf");
	uintptr_t	raw;

	one.integer = 1;
	one.ptr = input;
	one.floatin_point = 42.42f;
	raw = Serialize::serialize(&one);
	two = Serialize::deserialize(raw);
	std::cout	<< "integer is :\t" <<two->integer << "\n"
				<< "pointer is :\t" <<two->ptr << "\n"
				<< "floating point is :\t" <<two->floatin_point << std::endl;
	return 0;
}