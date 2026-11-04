/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 15:58:06 by marvin            #+#    #+#             */
/*   Updated: 2026/11/04 19:07:23 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>
# include <string>
# include <cstdlib>

# ifndef DEBUG
# define DEBUG 0
# endif

/*
Examples of int literals: 0, -42, 42
Examples of float literals: 0.0f, -4.2f, 4.2f
Examples of double literals: 0.0, -4.2, 4.2
*/

class ScalarConverter
{

	public:

		ScalarConverter();
//		ScalarConverter( ScalarConverter const & src );
		~ScalarConverter();

//		ScalarConverter &		operator=( ScalarConverter const & rhs );

		static void	convert( std::string literal );

	private:

};

//std::ostream &			operator<<( std::ostream & o, ScalarConverter const & i );

#endif /* ************************************************* SCALARCONVERTER_H */