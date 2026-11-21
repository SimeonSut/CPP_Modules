/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssutarmi <ssutarmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/15 18:43:15 by ssutarmi          #+#    #+#             */
/*   Updated: 2026/11/16 17:01:33 by ssutarmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

template <typename T>
Array<T>::Array() : _size(0)
{
	if (DEBUG)
		std::cout << "(Array Constructor called)" << std::endl;
	_array = NULL;
}

template <typename T>
Array<T>::Array( unsigned int n ) : _size(n)
{
	if (DEBUG)
		std::cout << "(Array N long Constructor called)" << std::endl;
	try
	{
		_array = new T[n];
	}
	catch ( std::bad_alloc & alloc_failure )
	{
		std::cout	<< "Allocation of N long array constructor failed on new\n\n"
					<< "array equaled to NULL, message of failure is :\n\t\t"
					<< alloc_failure.what();
		_array = NULL;
		return ;
	}
	for ( unsigned int i = 0; i < n; i++)
	{
		_array[i] = 0;
	}
}

template <typename T>
Array<T>::Array( const Array & src ) : _size(src.size())
{
	if (DEBUG)
		std::cout << "(Array Copy Constructor called)" << std::endl;

	if (_size == 0)
	{
		_array = NULL;
		return;
	}
	_array = new T[_size];
	for (unsigned int i = 0; i < _size; i++)
	{
		_array[i] = src[i];
	}
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

template <typename T>
Array<T>::~Array()
{
	if (DEBUG)
		std::cout << "(Array Destructor called)" << std::endl;
	if (_array != NULL)
		delete[] _array;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

template <typename T>
Array<T>&	Array<T>::operator=( Array const & src )
{
	if (DEBUG)
		std::cout << "(Array assignement overload called)" << std::endl;
	if ( this != &src )
	{
		delete[] _array;
		_array = new T[src.size()];
		for (unsigned int i = 0; i < src.size(); i++)
			_array[i] = src[i];
	}
	return *this;
}

template <typename T>
T&	Array<T>::operator[]( unsigned int index ) const
{
	if (DEBUG)
		std::cout << "(Array subscription overload called)" << std::endl;
	if ( index < 0 || index >= _size )
		throw std::exception();
	return _array[index];
}

template <typename T>
std::ostream operator<<( std::ostream& outstream, Array<T>& src )
{
	if (DEBUG)
		std::cout << "(outstream overload called)" << std::endl;
	outstream << src;
	return outstream;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

template <typename T>
unsigned int const & Array<T>::size() const
{
	if (DEBUG)
		std::cout << "(Array size accessor called)" << std::endl;
	return _size;
}

/* ************************************************************************** */