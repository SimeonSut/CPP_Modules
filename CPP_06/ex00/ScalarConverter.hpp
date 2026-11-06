/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssutarmi <ssutarmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 15:58:06 by marvin            #+#    #+#             */
/*   Updated: 2026/11/06 22:40:03 by ssutarmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# ifndef DEBUG
# define DEBUG 0
# endif

# include <iostream>
# include <string>
# include <sstream>
# include <cstdlib>
# include <cctype>
# include "limits.h"

enum e_types
{
	NONE,
	CHAR,
	INT,
	FLOAT,
	DOUBLE
};

class ScalarConverter
{

	public:

		ScalarConverter();
		ScalarConverter( ScalarConverter const & src );
		virtual ~ScalarConverter();

		static void	convert( std::string literal );

	private:

};

#endif /* ************************************************* SCALARCONVERTER_H */