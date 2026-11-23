/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/19 13:16:16 by ssutarmi          #+#    #+#             */
/*   Updated: 2026/11/23 21:04:24 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

template <typename T, typename Container>
MutantStack<T, Container>::MutantStack()
{}

template <typename T, typename Container>
MutantStack<T, Container>::MutantStack( const MutantStack & src )
{
	iterator	it = src.begin();

	while ( it != src.end() )
	{
		this->push(*it);
		it++;
	}
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

template <typename T, typename Container>
MutantStack<T, Container>::~MutantStack()
{}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

template <typename T, typename Container>
MutantStack<T, Container> &	 MutantStack<T, Container>::operator=( MutantStack const & src )
{
	if ( this != &src )
	{
		typename Container::iterator	it = src.begin();
		while ( it != src.end() )
		{
			this->push(*it);
			it++;
		}
	}
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/
template <typename T, typename Container>
typename MutantStack<T, Container>::iterator	MutantStack<T, Container>::begin()
{
	return this->c.begin();
}

//TESTS ONGOING!
template <typename T, typename Container>
typename MutantStack<T, Container>::iterator	MutantStack<T, Container>::end()
{
	return this->c.end();
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

/******************************************ITERATOR******************************************/

/*
** ------------------------------- CONSTRUCTOR --------------------------------


template <typename T, typename Container>
MutantStack<T, Container>::iterator::iterator()
{}

template <typename T, typename Container>
MutantStack<T, Container>::iterator::iterator( const MutantStack::iterator & src )
{}
*/
/*
** -------------------------------- DESTRUCTOR --------------------------------


template <typename T, typename Container>
MutantStack<T, Container>::iterator::~iterator()
{}
*/
/*
** --------------------------------- OVERLOAD ---------------------------------


template <typename T, typename Container>
T*	MutantStack<T, Container>::iterator::operator*()
{
	return &(*it);
}

template <typename T, typename Container>
typename MutantStack<T, Container>::iterator&	MutantStack<T, Container>::iterator::operator++()
{
	it++;
	return *this;
}

template <typename T, typename Container>
typename MutantStack<T, Container>::iterator&	MutantStack<T, Container>::iterator::operator--()
{
	it--;
	return *this;
}

template <typename T, typename Container>
bool		MutantStack<T, Container>::iterator::operator!=( iterator const & left )
{
	if ( this != &left )
		return false;
	return true;
}
*/
/*
** --------------------------------- METHODS ----------------------------------
*/

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

/* ************************************************************************** */
