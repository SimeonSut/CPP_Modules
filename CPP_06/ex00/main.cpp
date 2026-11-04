/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 15:58:02 by marvin            #+#    #+#             */
/*   Updated: 2026/11/04 15:58:02 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main( int argc, char **argv )
{
	if (argc <= 1)
		return 1;
	ScalarConverter input;

	input.convert(argv[1]);
	input.convert(argv[2]);
	input.convert(argv[3]);
	input.convert(argv[4]);
	return 0;
}