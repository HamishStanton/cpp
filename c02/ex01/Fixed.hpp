/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hstanton <hstanton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 05:18:01 by hstanton          #+#    #+#             */
/*   Updated: 2023/05/01 05:21:56 by hstanton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP

# define FIXED_HPP

# include <iostream>
# include <math.h>

class Fixed
{
    private:
            int rawbits;
            static const int    bits = 8;
    public:
            Fixed();
                    Fixed(int const n);
                    Fixed(float const f);
            ~Fixed();
            Fixed(const Fixed &copy);
            Fixed   &operator=(const Fixed &f);
            int getRawBits(void) const;
            void    setRawBits(int const raw);

            float   toFloat(void) const;
            int toInt(void) const;
};

std::ostream    &operator<<(std::ostream &stream, const Fixed &f);

#endif