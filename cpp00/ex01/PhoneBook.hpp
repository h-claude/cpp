/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hclaude <hclaude@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 00:17:52 by hclaude           #+#    #+#             */
/*   Updated: 2024/10/21 21:00:47 by hclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP

# define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iostream>
#include <string>

class PhoneBook
{
	public :

		PhoneBook();
		~PhoneBook();
		void		add_contact();
		void		remove_contact(int index);
		void		search_contact(int index);

	private :

		int			_index;
		int			_older;
		Contact		_phonebook[8];
};

#endif

