/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hstanton <hstanton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 05:34:07 by hstanton          #+#    #+#             */
/*   Updated: 2023/05/01 19:12:17 by hstanton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP

# define FIXED_HPP

# include <math.h>
# include <iostream>

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

            Fixed &operator=(const Fixed &f);
            float   operator+(const Fixed &f);
            float   operator-(const Fixed &f);
            float   operator*(const Fixed &f);
            float   operator/(const Fixed &f);

            bool    operator>(const Fixed &f);
            bool    operator<(const Fixed &f);
            bool    operator>=(const Fixed &f);
            bool    operator<=(const Fixed &f);
            bool    operator==(const Fixed &f);
            bool    operator!=(const Fixed &f);

            float   operator++(void);
            float   operator--(void);

            Fixed   operator++(int);
            Fixed   operator--(int);

            int getRawBits(void) const;
            void    setRawBits(int const raw);

            float   toFloat(void) const;
            int     toInt(void) const;

            Fixed   static &min(Fixed &a, Fixed &b);
            Fixed   static &max(Fixed &a, Fixed &b);
            const Fixed     static &min(const Fixed &a, const Fixed &b);
            const Fixed     static &max(const Fixed &a, const Fixed &b);
};

std::ostream    &operator<<(std::ostream &stream, const Fixed &f);

#endif