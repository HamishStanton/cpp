/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hstanton <hstanton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 04:46:18 by hstanton          #+#    #+#             */
/*   Updated: 2023/05/03 04:46:35 by hstanton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main ()
{
	ClapTrap	clappy("steve");
	ScavTrap	scav("barry cornelius");

	scav.setName("bob");

	clappy.attack(scav.getName());
	scav.takeDamage(clappy.getAttack());
	scav.attack(clappy.getName());
	clappy.takeDamage(scav.getAttack());

	clappy.beRepaired(200);
	scav.beRepaired(5);

	clappy.takeDamage(6);
	scav.takeDamage(100);

    scav.guardGate();

	return (0);
}