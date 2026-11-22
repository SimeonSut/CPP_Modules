/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/19 13:16:18 by ssutarmi          #+#    #+#             */
/*   Updated: 2026/11/23 00:01:25 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#ifndef DEBUG
#define DEBUG 0
#endif

#define LEFT 0
#define RIGHT 1

# include <iostream>
# include <string>
# include <stack>

template <typename T, typename Container = std::deque<T> >
class MutantStack : public std::stack<T, Container>
{

	public:

		MutantStack();
		MutantStack( MutantStack const & src );
		~MutantStack();

		MutantStack &		operator=( MutantStack const & src );

		typedef typename Container::iterator	iterator;

		iterator	begin();
		iterator	end();

};

#include "MutantStack.tpp"

#endif /**********************MUTANTSTACK_H*************************/