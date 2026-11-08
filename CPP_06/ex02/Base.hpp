/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/08 18:44:24 by marvin            #+#    #+#             */
/*   Updated: 2026/11/08 19:24:37 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP

# ifndef DEBUG
# define DEBUG 0
# endif

# include <iostream>
# include <string>
# include <cstdlib>

class Base
{
	public :
		virtual ~Base();
};

class A : public Base
{};

class B : public Base
{};

class C : public Base
{};

Base * generate(void);
void identify(Base* p);
void identify(Base& p);

#endif /* ************************************************************ BASE_H */