/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hstanton <hstanton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 01:09:00 by hstanton          #+#    #+#             */
/*   Updated: 2023/05/01 01:11:33 by hstanton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP

# define ZOMBIE_HPP

# include <iostream>
# include <string>

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

Zombie *zombieHorde(int N, std::string name);

#endif