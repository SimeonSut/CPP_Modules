/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/23 21:22:47 by marvin            #+#    #+#             */
/*   Updated: 2026/11/23 21:22:47 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "invalid number of arguments!" << std::endl;
		return 1;
	}
	BitcoinExchange	test(argv[1]);
	test.Bitcoin_Conversion();
	return 0;
}