/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssutarmi <ssutarmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/19 13:16:18 by ssutarmi          #+#    #+#             */
/*   Updated: 2026/11/20 21:11:28 by ssutarmi         ###   ########.fr       */
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

		class iterator
		{
			public:

				iterator();
				iterator( iterator const & src );
				~iterator();

				T*			operator*();
				iterator&	operator++();
				iterator&	operator--();
				bool		operator!=( iterator const & left );

			private:

				MutantStack<T, Container>	stacks[2];

		};

		MutantStack<T, Container>::iterator &	begin();
		MutantStack<T, Container>::iterator &	end();

};

#endif /**********************MUTANTSTACK_H*************************/