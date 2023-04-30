/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hstanton <hstanton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 03:45:03 by hstanton          #+#    #+#             */
/*   Updated: 2023/05/01 03:57:24 by hstanton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP

# define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanB
{
    private:
            std::string name;
            Weapon  *pike;

    public:
            HumanB(std::string input);
            ~HumanB(void);
            void    setName(std::string newname);
            std::string     getName(void);
            void    attack();
            void    setWeapon(Weapon &weapon);
};

#endif