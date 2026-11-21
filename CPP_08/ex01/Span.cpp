/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssutarmi <ssutarmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/17 22:02:18 by ssutarmi          #+#    #+#             */
/*   Updated: 2026/11/19 16:04:45 by ssutarmi         ###   ########.fr       */
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

void Span::addRange( int const & range_start, int const & range_finish )
{
	int addition = range_start;

	for ( ; span_index != span.end() && addition <= range_finish ;  span_index++, addition++ )
		*span_index = addition;
	if ( span_index == span.end() && addition <= range_finish )
		throw std::invalid_argument("Span is spent and all elements form the range couldnt be added!");
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

/* ************************************************************************* */