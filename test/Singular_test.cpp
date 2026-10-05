/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Singular_test.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/03 22:06:23 by marvin            #+#    #+#             */
/*   Updated: 2026/10/03 22:06:23 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <vector>
#include <algorithm>
#include <functional>
#include <iostream>

int	main( void )
{
	int const			array[4] = { 1, 2, 3, 4 };

//Initialized with the first address of the array and the last one
	std::vector<int>	vect(array, array + 3);
	
	std::cout << vect[0] << vect[1] << vect[2] << vect[3] << vect[4] << vect[5];
	return 0;
}


/*****************************************************
this was to test how to use cin followed by getline.
******************************************************/
/*
#include <iostream>

int	main(void)
{
	int age;
	std::string name;

	std::cout << "Enter your age: ";
	std::cin >> age;
	std::cin.ignore(10000, '\n'); // Skip leftover newline
	std::cout << "Enter your name: ";
	std::getline(std::cin, name); // This now works properly
}*/



/*****************************************************
this was to test some of the member functions of cin.
******************************************************/
/*
int main(void)
{
	char	str[20];
	int		num;

	std::cin.get(str, 5);
	num = std::cin.gcount();
	std::cout << "Read " << num << " characters and got " << str << "\n";
	return 0;
}*/