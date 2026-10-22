
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/11 15:37:31 by marvin            #+#    #+#             */
/*   Updated: 2026/10/11 15:37:31 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main(void)
{
	Fixed a;
	Fixed b( Fixed( 5.05f ) * Fixed( 2 ) );
	Fixed c( Fixed( 10.05f ) / Fixed( 2 ) );
	Fixed d( Fixed( 10.05f ) + Fixed( 2 ) );
	Fixed e( Fixed( 10.05f ) - Fixed( 2 ) );
	Fixed b_bis( Fixed( 2 ) * Fixed( 5.05f ) );
	Fixed c_bis( Fixed( 2 ) / Fixed( 10.05f ) );
	Fixed d_bis( Fixed( 2 ) + Fixed( 10.05f ) );
	Fixed e_bis( Fixed( 2 ) - Fixed( 10.05f ) );

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << a - b << std::endl;
	std::cout << "a is :" << a << std::endl;
	std::cout << "b is :" << b << std::endl;
	b = a;
	std::cout << "new b is :" << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	std::cout << Fixed::min( a, b ) << std::endl;
	std::cout << "value of c is : " << c << std::endl;
	std::cout << "value of d is : " << d << std::endl;
	std::cout << "value of e is : " << e << std::endl;
	std::cout << "value of b_bis is : " << b_bis << std::endl;
	std::cout << "value of c_bis is : " << c_bis << std::endl;
	std::cout << "value of d_bis is : " << d_bis << std::endl;
	std::cout << "value of e_bis is : " << e_bis << std::endl;

	return 0;
}
