/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hstanton <hstanton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 03:44:01 by hstanton          #+#    #+#             */
/*   Updated: 2023/05/01 03:51:44 by hstanton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP

# define WEAPON_HPP

#include <iostream>
#include <string>

class Weapon
{
    private:
            std::string type;

    public:
            Weapon();
            ~Weapon();
            Weapon(std::string type);
            std::string     getType(void);
            void    setType(std::string newtype);
};

#endif