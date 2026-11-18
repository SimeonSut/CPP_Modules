/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssutarmi <ssutarmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/17 22:02:18 by ssutarmi          #+#    #+#             */
/*   Updated: 2026/11/18 16:53:08 by ssutarmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Span::Span() : N(0)
{
	span.resize(0);
	span_index = span.begin();
}

Span::Span( unsigned int const & N ) : N(N)
{
	span.resize(N);
	span_index = span.begin();
}

Span::Span( const Span & src ) : N(src.getN()), span(src.getSpan())
{}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Span::~Span()
{}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Span &				Span::operator=( Span const & src )
{
	if ( this != &src )
		span = src.getSpan();
	return *this;
}

std::ostream &			operator<<( std::ostream & outstream, Span & src )
{
	int	i = 0;
	std::list<int>::iterator it = src.getStartIndex();

	for ( ; it != src.getSpan().end() ; it++, i++ )
	{
		if ( i % 20 == 0 )
			outstream << "\n";
		outstream << *it << "\t";
	}
	return outstream;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void Span::addNumber( int const & addition )
{
	if ( span_index == span.end() )
		throw std::invalid_argument("Span is spent!");
	*span_index = addition;
	span_index++;
}

unsigned long Span::shortestSpan()
{
	if ( span_index == span.begin() || getN() <= 1 )
		throw std::invalid_argument("Not enough elements to calculate any Span!");

	long	shortest = LONG_LONG_MAX;
	long	tmp = 0;
	std::list<int>	sorted(span);

	sorted.sort();
	for ( std::list<int>::iterator sorted_i = sorted.begin() ;  ;  )
	{
		tmp = *sorted_i++;
		if (sorted_i == sorted.end())
			break;
		if (labs(tmp - *sorted_i) < shortest)
			shortest = labs(tmp - *sorted_i);
	}
	return shortest;
}

unsigned long Span::longestSpan()
{
	if ( span_index == span.begin() || getN() <= 1 )
		throw std::invalid_argument("Not enough to calculate any Span!");

	std::list<int> sorted(span);

	sorted.sort();

	return labs(*sorted.begin() - sorted.back());
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

unsigned int const & Span::getN() const
{
	return N;
}

std::list<int> const & Span::getSpan() const
{
	return span;
}

std::list<int>::iterator Span::getStartIndex()
{
	return span.begin();
}

/*
void Span::setN( unsigned int const & newN )
{
	N = newN;
}

void Span::setSpan( std::list<int> const & src )
{
	span = src;
}

 ************************************************************************** */