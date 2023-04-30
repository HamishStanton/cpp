/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hstanton <hstanton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 03:44:42 by hstanton          #+#    #+#             */
/*   Updated: 2023/05/01 04:03:55 by hstanton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string input)
{
    setName(input);
}

HumanB::~HumanB(void)
{
    std::cout << "i died :(" << std::endl;
}

void    HumanB::setName(std::string newname)
{
    name = newname;
}

std::string     HumanB::getName()
{
    return (name);
}

void    HumanB::setWeapon(Weapon &weapon)
{
    pike = &weapon;
}

void    HumanB::attack()
{
    std::cout << getName() << " attacks with their " << pike->getType() << std::endl;
}