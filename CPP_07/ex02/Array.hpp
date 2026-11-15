/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssutarmi <ssutarmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/15 18:43:17 by ssutarmi          #+#    #+#             */
/*   Updated: 2026/11/15 21:51:32 by ssutarmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <string>

template <typename T>
class Array
{

	public:

		Array();
		Array( unsigned int n );
		Array( Array const & src );
		~Array();

		Array&	operator=( Array const & src );
		Array&	operator[]( unsigned int index ) const;

		unsigned int const & size() const;

	private:

		unsigned int	_size;
		T*				_array;

};

template <typename T>
std::ostream operator<<( std::ostream& outstream, Array<T>& src );

#include "Array.tpp"

#endif /* *********************************************************** ARRAY_H */