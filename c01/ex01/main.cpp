/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hstanton <hstanton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 01:11:57 by hstanton          #+#    #+#             */
/*   Updated: 2023/05/01 01:33:07 by hstanton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie *zombie_boyz;

    zombie_boyz = zombieHorde(5, "weezer");
    for (int i = 0; i < 5; i++)
    {
        zombie_boyz[i].announce();
    }
    delete[] zombie_boyz;
    return (0);
}