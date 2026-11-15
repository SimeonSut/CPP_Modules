/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssutarmi <ssutarmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/15 18:43:15 by ssutarmi          #+#    #+#             */
/*   Updated: 2026/11/15 21:53:34 by ssutarmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

template <typename T>
Array<T>::Array() : _size(0)
{
	_array = NULL;
}

template <typename T>
Array<T>::Array( unsigned int n ) : _size(n)
{
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
		_array[i] = 0;//this is highly theoretical
	}
}

template <typename T>
Array<T>::Array( const Array & src )
{
	delete[] _array;

	if (src._size() == 0)
	{
		_array = NULL;
		return;
	}
	_array = new T[src.size()];
	for (int i = 0; i < src._size(); i++)
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
	if (_array != NULL)
		delete[] _array;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

template <typename T>
Array<T>&	Array<T>::operator=( Array const & src )
{
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
Array<T>&	Array<T>::operator[]( unsigned int index ) const
{
	if ( index < 0 || index >= size() )
		throw std::exception();
	return _array[index];
}

template <typename T>
std::ostream operator<<( std::ostream& outstream, Array<T>& src )
{
	outstream << src;
	return outstream;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

template <typename T>
unsigned int const & Array<T>::size() const
{
	return _size;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

/* ************************************************************************** */