/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialize.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssutarmi <ssutarmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 17:37:09 by ssutarmi          #+#    #+#             */
/*   Updated: 2026/11/07 18:00:59 by ssutarmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZE_HPP
# define SERIALIZE_HPP

# ifndef DEBUG
# define DEBUG 0
# endif

# include <iostream>
# include <string>

struct Data
{
	int		integer;
	char	*ptr;
	float	floatin_point;
};

class Serialize
{

	public:

		Serialize();
		Serialize( Serialize const & src );
		virtual ~Serialize() = 0;

		Serialize &		operator=( Serialize const & src );

		static uintptr_t serialize(Data* ptr);
		static Data* deserialize(uintptr_t raw);

	private:

};

#endif /* ******************************************************* SERIALIZE_H */