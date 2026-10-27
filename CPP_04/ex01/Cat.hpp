/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssutarmi <ssutarmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/25 15:22:30 by ssutarmi          #+#    #+#             */
/*   Updated: 2026/10/27 21:33:01 by ssutarmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include "Animal.hpp"

class Cat : virtual public Animal
{
	public:

		Cat();
		Cat( Cat const & src );
		virtual ~Cat();

		Cat & operator=( const Cat & src );

		virtual std::string getType() const;
		Brain & getBrain() const;

	protected:

		void setBrain( const Brain & src );
		std::string type;

	private:

		Brain* brain;

};

#endif