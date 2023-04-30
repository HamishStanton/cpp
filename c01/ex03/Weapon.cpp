/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hstanton <hstanton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 03:44:10 by hstanton          #+#    #+#             */
/*   Updated: 2023/05/01 04:06:05 by hstanton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(void)
{
}

std::string     Weapon::getType(void)
{
    return(type);
}

void    Weapon::setType(std::string newtype)
{
    type = newtype;
}

Weapon::Weapon(std::string input)
{
    setType(input);
}

Weapon::~Weapon(void)
{
}