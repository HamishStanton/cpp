/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hstanton <hstanton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 23:26:00 by hstanton          #+#    #+#             */
/*   Updated: 2023/05/01 01:02:45 by hstanton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

//randomChump uses the stack which stores
//local variables, it is initalised

void    randomChump(std::string name)
{
    Zombie  randomChump;
    randomChump.set_name(name);
    randomChump.announce();
}