/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hstanton <hstanton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 23:25:57 by hstanton          #+#    #+#             */
/*   Updated: 2023/05/01 01:01:04 by hstanton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// new operator denotes a request for memory allocation on
// the heap - initalizes memory and returns the address
// of newly allocated memory to the pointer variable
// when using new to create an object of a class it
// uses the constructor of the class to initalize
// the memory.

Zombie *newZombie(std::string name)
{
    Zombie *newZombie = new Zombie;
    newZombie->set_name(name);
    return (newZombie);
}