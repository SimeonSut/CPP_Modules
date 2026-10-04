/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/02 13:39:50 by ssutarmi          #+#    #+#             */
/*   Updated: 2026/10/03 21:43:27 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <iomanip>

class Contact
{
	public:
		Contact();
		~Contact();
		int	set( void );
		void get( int index ) const;
	private:
		std::string	data[5];
};

class PhoneBook
{
	public:
		PhoneBook();
		~PhoneBook();
		void add ( void );
		void search ( int index );
	private:
		class Contact Contacts[9];
		int index;
};

enum contacts_info
{
	FIRST_NAME = 0,
	LAST_NAME,
	NICKNAME,
	PHONE_NUMBER,
	DARKEST_SECRET
};

#endif