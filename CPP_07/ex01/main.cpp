/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssutarmi <ssutarmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 20:21:48 by ssutarmi          #+#    #+#             */
/*   Updated: 2026/11/15 18:38:18 by ssutarmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int	main(void)
{
	char		cptr[14] = "Hello World!";
	char const*	const_cptr = "Hello World!";
	int			iptr[11] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int const	const_iptr[11] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	bool		bptr[11] = {false, false, false, false, false, false, false, false, false, false};
	std::string sptr[11] = {"Hi", "Hi", "Hi", "Hi", "Hi", "Hi", "Hi", "Hi", "Hi", "Hi"};

	const int char_len = 13;
	const int int_len = 10;
	const int bool_len = 10;
	const int string_len = 10;

	std::cout << "------------------char array tests------------------\n\n";
	std::cout << "char array before is :  " << cptr << "\n";
	iter<char>(cptr, char_len, &param_func);
	std::cout << "char array after is :  " << cptr << "\n";

	std::cout << "------------------char const ptr tests------------------\n\n";
	std::cout << "char const ptr before is :  " << const_cptr << "\n";
	iter<const char>(const_cptr, 13, &param_func);
	std::cout << "char const ptr after is :  " << const_cptr << "\n";

	std::cout << "------------------int array tests------------------\n\n";
	std::cout << "int iptr before is :  ";
	for (short i = 0; i <= int_len; i++)
		std::cout << iptr[i];
	std::cout << "\n";
	iter<int>(iptr, int_len, &param_func);
	std::cout << "int iptr after is :  ";
	for (short i = 0; i <= int_len; i++)
		std::cout << iptr[i];
	std::cout << "\n";

	std::cout << "------------------const int array tests------------------\n\n";
	std::cout << "int const iptr before is :  ";
	for (short i = 0; i <= int_len; i++)
		std::cout << const_iptr[i];
	std::cout << "\n";
	iter<const int>(const_iptr, int_len, &param_func);
	std::cout << "int const iptr after is :  ";
	for (short i = 0; i <= int_len; i++)
		std::cout << const_iptr[i];
	std::cout << "\n";

	std::cout << "------------------boolean array tests------------------\n\n";
	std::cout << "boolean bptr before is :  ";
	for (short i = 0; i <= bool_len; i++)
		std::cout << bptr[i];
	std::cout << "\n";
	iter<bool>(bptr, bool_len, &param_func);
	std::cout << "boolean bptr after is :  ";
	for (short i = 0; i <= bool_len; i++)
		std::cout << bptr[i];
	std::cout << "\n";

	std::cout << "------------------std string array tests------------------\n\n";
	std::cout << "std string before is :  ";
	for (short i = 0; i <= string_len; i++)
		std::cout << sptr[i];
	std::cout << "\n";
	iter<std::string>(sptr, string_len, &param_func);
	std::cout << "std string after is :  ";
	for (short i = 0; i <= string_len; i++)
		std::cout << sptr[i];
	std::cout << std::endl;
	return 0;
}