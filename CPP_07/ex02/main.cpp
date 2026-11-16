/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssutarmi <ssutarmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/15 18:40:04 by ssutarmi          #+#    #+#             */
/*   Updated: 2026/11/16 17:03:18 by ssutarmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main(void)
{
	Array<int>  	Zero;
	Array<int>  	Two(2);
	Array<int>		Other_Two(2);
	int				index = 0;
	int				input = 1;
	int*			a = new int();

	std::cout	<< "\nsize of empty array is " << Zero.size() << "\n"
				<< "\ntest display of int gives : " << *a << "\n\n"
				<< "test display of initiated array gives "
				<< Two[0] << " on first index and "
				<< Two[1] << " on second index\n\n";

	delete a;
	Two[index++] = input++;
	Two[index++] = input++;

	for (int i = -1; i < 3; i++)
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

	for (int i = 0; i < 2; i++)
	{
		std::cout << "Other_Two's element at index " << i << " before copy is ";
		try
		{
			std::cout << Other_Two[i];
		}
		catch (std::exception & e)
		{
			std::cout << "out of bounds!";
		}
		std::cout << "\n";
	}

	std::cout << "\n----ASSIGNATION of Other_Two into Two and modification of Two----\n\n";
	Other_Two = Two;
	Two[0] = 42;
	Two[1] = 42;

	for (int i = 0; i < 2; i++)
	{
		std::cout << "Other_Two's element at index " << i << " after assignation is ";
		try
		{
			std::cout << Other_Two[i];
		}
		catch (std::exception & e)
		{
			std::cout << "out of bounds!";
		}
		std::cout << "\n";
	}

	std::cout << "\n----COPY construction of Yet_Another_Two with Two and modification of Two----\n\n";
	Array<int> Yet_Another_Two(Two);
	Two[0] = 0;
	Two[1] = 0;

	for (int i = 0; i < 2; i++)
	{
		std::cout << "Yet_Another_Two's element at index " << i << " after copy is ";
		try
		{
			std::cout << Yet_Another_Two[i];
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