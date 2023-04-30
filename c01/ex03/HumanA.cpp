/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hstanton <hstanton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 03:44:32 by hstanton          #+#    #+#             */
/*   Updated: 2023/05/01 04:07:15 by hstanton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon)
{
    setName(name);
    pike = &weapon;
}

HumanA::~HumanA(void)
{
    std::cout << "rip :(" << std::endl;
}

void    HumanA::setName(std::string newname)
{
    name = newname;
}

std::string     HumanA::getName(void)
{
    return (name);
}

void    HumanA::attack(void)
{
    std::cout << getName() << " attacks with their " << pike->getType() << std::endl;
}