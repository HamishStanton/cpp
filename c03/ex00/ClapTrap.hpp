/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hstanton <hstanton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 23:35:23 by hstanton          #+#    #+#             */
/*   Updated: 2023/05/01 23:39:50 by hstanton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP

# define CLAPTRAP_HPP

# include <iostream>
# include <string.h>

class ClapTrap
{
    private:
            std::string name;
            int hit;
            int energy;
            int att;
    public:
            ClapTrap();
            ClapTrap(std::string name);
            ClapTrap(const ClapTrap &c);
            ~ClapTrap();

            ClapTrap    &operator=(const ClapTrap &c);
};



#endif