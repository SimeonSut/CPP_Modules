/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssutarmi <ssutarmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/08 14:56:26 by ssutarmi          #+#    #+#             */
/*   Updated: 2026/10/08 20:41:35 by ssutarmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
#include <string>

class Harl
{
	public:
		Harl();
		~Harl();
		std::string complain( std::string level );
		int complain_index( std::string level );
	private:
		std::string debug( void );
		std::string info( void );
		std::string warning( void );
		std::string error( void );
};

#endif