/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hclaude <hclaude@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 18:18:50 by hclaude           #+#    #+#             */
/*   Updated: 2024/11/07 14:45:44 by hclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"
#include <iostream>
#include <string>

class ScavTrap : virtual public ClapTrap
{
	public :

		ScavTrap(const std::string& name);
		ScavTrap(const ScavTrap& cpy);
		~ScavTrap();

		ScavTrap&	operator=(const ScavTrap& src);
		
		void		guardGate();
		void		attack(const std::string& name);
		
	private :
	
		bool	_guardGateState;

};