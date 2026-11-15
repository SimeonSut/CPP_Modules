/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssutarmi <ssutarmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/15 18:40:04 by ssutarmi          #+#    #+#             */
/*   Updated: 2026/11/15 21:48:00 by ssutarmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main(void)
{
	Array<int>  	Zero;
	Array<int>  	Two(2);
	unsigned int	index = 0;
	unsigned int	input = 1;

	Two[index++] = input++;
	Two[index] = input;
	for (unsigned int i = -1; i < 2; i++)
	{
		std::cout << "Two's element at index " << i << " is ";
		try
		{
			std::cout << Two[i];
		}
		catch (std::exception & e)
		{
			std::cout << "out of bounds!";
		}
		std::cout << "\n";
	}
	std::cout << std::endl;
	return 0;
}