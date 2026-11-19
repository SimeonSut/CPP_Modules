/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssutarmi <ssutarmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/19 13:16:18 by ssutarmi          #+#    #+#             */
/*   Updated: 2026/11/19 22:05:15 by ssutarmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <string>
# include <stack>

template <typename T, typename Container = std::deque<T>>
class MutantStack : std::stack
{

	public:

		MutantStack();
		MutantStack( MutantStack const & src );
		~MutantStack();

		iterator();

		MutantStack &		operator=( MutantStack const & src );

	private:

};

std::ostream &			operator<<( std::ostream & outstream, MutantStack const & src );

#endif /* ***************************************************** MUTANTSTACK_H */