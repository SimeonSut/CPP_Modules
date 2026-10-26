/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssutarmi <ssutarmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/25 15:22:30 by ssutarmi          #+#    #+#             */
/*   Updated: 2026/10/26 17:52:29 by ssutarmi         ###   ########.fr       */
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

		virtual std::string getType() const;
		Brain & getBrain() const;
		virtual void setType( std::string const & newType );
		void setBrain( const Brain & src );

		Cat & operator=( const Cat & src );

	protected:

		std::string type;

	private:

		Brain* brain;

};

#endif