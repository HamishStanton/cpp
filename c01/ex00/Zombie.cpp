/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hstanton <hstanton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 23:26:02 by hstanton          #+#    #+#             */
/*   Updated: 2023/05/01 00:39:40 by hstanton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
{
    name = "nobody yet";
}

Zombie::~Zombie(void)
{
    std::cout << get_name() << std::endl;
}

void    Zombie::set_name(std::string newname)
{
    name = newname;
}

std::string     Zombie::get_name(void)
{
    return (name);
}

void    Zombie::announce(void)
{
    std::cout << get_name() << ": BraiiiiiiinnnzzzZ..." << std::endl;
}