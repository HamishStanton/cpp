/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hstanton <hstanton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 23:25:54 by hstanton          #+#    #+#             */
/*   Updated: 2023/05/01 00:46:23 by hstanton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie *zombie_boy;
    zombie_boy = newZombie("Zombie Heap");
    zombie_boy->announce();
    randomChump("Zombie Stack");
    delete zombie_boy;
}