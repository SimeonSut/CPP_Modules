
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
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	Fixed const c( Fixed( 10.05f ) / Fixed( 2 ) );
	Fixed const d( Fixed( 10.05f ) + Fixed( 2 ) );
	Fixed const e( Fixed( 10.05f ) - Fixed( 2 ) );
	Fixed const b_bis( Fixed( 2 ) * Fixed( 5.05f ) );
	Fixed const c_bis( Fixed( 2 ) / Fixed( 10.05f ) );
	Fixed const d_bis( Fixed( 2 ) + Fixed( 10.05f ) );
	Fixed const e_bis( Fixed( 2 ) - Fixed( 10.05f ) );

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
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
