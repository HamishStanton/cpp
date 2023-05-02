/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hstanton <hstanton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 05:16:20 by hstanton          #+#    #+#             */
/*   Updated: 2023/05/03 05:26:02 by hstanton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP

# define FRAGPTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    private:

    public:
        FragTrap();
        FragTrap(std::string name);
        FragTrap(const FragTrap &f);
        ~FragTrap();

        void    highFivesGuys(void);

        FragTrap    &operator=(const FragTrap &f);

        void    attack(const std::string &target);
    
};

#endif