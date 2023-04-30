/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hstanton <hstanton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 22:48:17 by hstanton          #+#    #+#             */
/*   Updated: 2023/05/01 00:28:52 by hstanton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE.HPP
#define ZOMBIE.HPP

#include <string>
#include <iostream>

class Zombie
{
    private:
            std::string name;
    
    public:
            Zombie();
            ~Zombie();
            std::string     get_name(void);
            void    set_name(std::string newname);
            void    announce(void);    
};

Zombie *newZombie(std::string name);
void    randomChump(std::string name);

#endif