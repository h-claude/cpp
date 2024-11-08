/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hclaude <hclaude@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 16:08:53 by hclaude           #+#    #+#             */
/*   Updated: 2024/11/08 16:36:48 by hclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main(void)
{
	{
		ClapTrap	clap("Je suis monsieur clap");
		ClapTrap	clap2(clap);

		clap.attack("un ennemi");
		clap.takeDamage(5);
		clap.beRepaired(3);
		clap.takeDamage(10);
	}
	{
		ScavTrap	scav("Je suis monsieur scav");
		ScavTrap	scav2(scav);

		scav.attack("un ennemi");
		scav.takeDamage(5);
		scav.beRepaired(3);
		scav.guardGate();
		scav.takeDamage(1000);
	}
	{
		FragTrap	frag("Je suis monsieur frag");
		FragTrap	frag2(frag);

		frag.attack("un ennemi");
		frag.takeDamage(5);
		frag.beRepaired(3);
		frag.highFivesGuys();
		frag.takeDamage(1000);
	}
	{
		DiamondTrap	diamond("Je suis monsieur diamond");
		DiamondTrap	diamond2(diamond);

		diamond.attack("un ennemi");
		diamond.takeDamage(5);
		diamond.beRepaired(3);
		diamond.guardGate();
		diamond.highFivesGuys();
		diamond.whoAmI();
		diamond.takeDamage(1000);
	}
}