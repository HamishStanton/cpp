/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hstanton <hstanton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 04:40:04 by hstanton          #+#    #+#             */
/*   Updated: 2023/05/01 05:08:47 by hstanton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP

# define FIXED_HPP

#include <iostream>

class Fixed
{
    private:
            int rawbits;
            static const int    bits = 8;

    public:
            Fixed();
            ~Fixed();
            Fixed(const Fixed &copy);
            Fixed   &operator=(const Fixed &f);
            int getRawBits(void) const;
            void    setRawBits(int const raw);            
};

#endif