/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssutarmi <ssutarmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/17 22:02:21 by ssutarmi          #+#    #+#             */
/*   Updated: 2026/11/19 16:04:23 by ssutarmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <string>
# include <list>
# include <limits.h>
# include <math.h>

class Span
{

	public:

		Span();
		Span( unsigned int const & N );
		Span( Span const & src );
		~Span();

		void addNumber( int const & addition );
		void addRange( int const & range_start, int const & range_finish );
		unsigned long shortestSpan();
		unsigned long longestSpan();

		unsigned int const & getN() const;
		std::list<int> const & getSpan() const;
		std::list<int>::iterator getStartIndex();

		Span &		operator=( Span const & src );

	private:

		unsigned int N;

		std::list<int>				span;
		std::list<int>::iterator	span_index;

};

std::ostream &			operator<<( std::ostream & outstream, Span & src );

#endif /* ************************************************************ SPAN_H */