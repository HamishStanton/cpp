/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hstanton <hstanton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 04:24:04 by hstanton          #+#    #+#             */
/*   Updated: 2023/05/01 04:27:52 by hstanton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP

# define HARL_HPP

#include <iostream>

class Harl
{
    private:
            void    debug(void);
            void    info(void);
            void    warning(void);
            void    error(void);
    
    public:
            void    complain(std::string level);
};

#endif