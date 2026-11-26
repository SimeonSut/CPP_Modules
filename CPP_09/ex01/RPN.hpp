/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/26 02:34:52 by marvin            #+#    #+#             */
/*   Updated: 2026/11/26 02:50:33 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

# include <iostream>
# include <string>

class RPN
{

	public:

		RPN();
		RPN( std::string input );
		RPN( RPN const & src );
		~RPN();

		RPN &		operator=( RPN const & src );

	private:

};

std::ostream &			operator<<( std::ostream & o, RPN const & i );

#endif /* ************************************************************* RPN_H */