/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssutarmi <ssutarmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 12:18:41 by ssutarmi          #+#    #+#             */
/*   Updated: 2026/10/26 15:39:16 by ssutarmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include "Animal.hpp"

class Brain
{
	public:

		Brain();
		Brain( Brain const & src );
		~Brain();

		Brain & operator=( Brain const & src );

		void sayIdeas();
		void setIdea( std::string idea );
		void getBrain();

	private:

		std::string ideas[100];

};

#endif