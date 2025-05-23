/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hclaude <hclaude@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 19:22:24 by hclaude           #+#    #+#             */
/*   Updated: 2024/10/28 16:47:58 by hclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class Fixed
{
	public :

		Fixed();
		Fixed(const Fixed& src);
		Fixed& operator=(const Fixed& src);
		~Fixed();

		int		getRawBits(void) const;
		void	setRawBits(int const raw);


	private :

		int					_value;
		static int const	_bites;

} ;


