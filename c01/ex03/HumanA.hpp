/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hstanton <hstanton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 03:44:24 by hstanton          #+#    #+#             */
/*   Updated: 2023/05/01 04:07:55 by hstanton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP

# define HUMANA_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanA
{
    private:
            std::string name;
            Weapon  *pike;

    public:
            HumanA(std::string name, Weapon &weapon);
            ~HumanA(void);
            void    setName(std::string newname);
            std::string     getName(void);
            void    attack(void);
};

#endif