/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hstanton <hstanton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 05:26:36 by hstanton          #+#    #+#             */
/*   Updated: 2023/05/03 05:26:40 by hstanton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main ()
{
	ClapTrap	clappy("steve");
	ScavTrap	scav("barry cornelius");
    FragTrap    frag("axolotl");

	clappy.attack(scav.getName());
    frag.attack(clappy.getName());
	scav.takeDamage(clappy.getAttack());
    clappy.takeDamage(frag.getAttack());
	scav.attack(clappy.getName());
	clappy.takeDamage(scav.getAttack());

	clappy.beRepaired(200);
	scav.beRepaired(5);
    frag.beRepaired(70);

	clappy.takeDamage(6);
	scav.takeDamage(100);
    frag.takeDamage(2);

    scav.guardGate();
    frag.highFivesGuys();

	return (0);
}