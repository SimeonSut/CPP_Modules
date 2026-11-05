/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssutarmi <ssutarmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 15:58:06 by marvin            #+#    #+#             */
/*   Updated: 2026/11/05 20:17:48 by ssutarmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>
# include <string>
# include <cstdlib>
# include <cctype>

# ifndef DEBUG
# define DEBUG 0
# endif

# ifndef NONE
# define NONE -1
# endif

# ifndef FLOAT
# define FLOAT 1
# endif

# ifndef DOUBLE
# define DOUBLE 2
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
		ScalarConverter( ScalarConverter const & src );
		virtual ~ScalarConverter();

//		ScalarConverter &		operator=( ScalarConverter const & rhs );

		static void	convert( std::string literal );

	private:

};

//std::ostream &			operator<<( std::ostream & o, ScalarConverter const & i );

#endif /* ************************************************* SCALARCONVERTER_H */