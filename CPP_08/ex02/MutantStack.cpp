/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssutarmi <ssutarmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/19 13:16:16 by ssutarmi          #+#    #+#             */
/*   Updated: 2026/11/19 21:58:40 by ssutarmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

MutantStack::MutantStack()
{
}

MutantStack::MutantStack( const MutantStack & src )
{
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

MutantStack::~MutantStack()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

MutantStack &				MutantStack::operator=( MutantStack const & src )
{
	//if ( this != &rhs )
	//{
		//this->_value = rhs.getValue();
	//}
	return *this;
}

std::ostream &			operator<<( std::ostream & outstream, MutantStack const & src )
{
	//o << "Value = " << i.getValue();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */