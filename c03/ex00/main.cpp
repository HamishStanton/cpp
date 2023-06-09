/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hstanton <hstanton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 23:35:34 by hstanton          #+#    #+#             */
/*   Updated: 2023/05/03 04:20:57 by hstanton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main ()
{
	ClapTrap	clappy("steve");
	ClapTrap	clappers = clappy;

	clappers.setName("bob");

	clappy.attack(clappers.getName());
	clappers.takeDamage(clappy.getAttack());
	clappers.attack(clappy.getName());
	clappy.takeDamage(clappers.getAttack());

	clappy.beRepaired(10);
	clappers.beRepaired(5);

	clappy.takeDamage(6);
	clappers.takeDamage(100);

	clappers.attack(clappy.getName());

	for (int repair = 1; repair < 10; repair++)
	{
		clappy.beRepaired(repair);
	}
	
	clappy.attack("greg");

	return (0);
}