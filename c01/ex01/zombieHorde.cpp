/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hstanton <hstanton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 01:14:51 by hstanton          #+#    #+#             */
/*   Updated: 2023/05/01 01:33:22 by hstanton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie  *zombieHorde(int N, std::string name)
{
    Zombie *zombiez = new Zombie[N];
    
    for (int i = 0; i < N; i++)
    {
        zombiez[i].set_name(name);
    }
    return (zombiez);
}