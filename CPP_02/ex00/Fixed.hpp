/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/11 15:37:27 by marvin            #+#    #+#             */
/*   Updated: 2026/10/11 15:37:27 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
	public:
		Fixed();
		Fixed( Fixed const & src );
		~Fixed();

		Fixed & operator=( Fixed const & src );

		int getRawBits( void ) const;
		void setRawBits( int const raw );
	private:
		int 				_fixed_point_value;
		static const int	_fract_value = 8;
};

#endif