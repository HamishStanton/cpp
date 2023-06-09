/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hstanton <hstanton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 05:17:53 by hstanton          #+#    #+#             */
/*   Updated: 2023/05/01 05:31:15 by hstanton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    rawbits = 0;
}

// copy constructor
// initialises variables of the class using a
// previously initialised object
Fixed::Fixed(const Fixed &copy)
{
    std::cout << "Copy constructor called" << std::endl;
    setRawBits(copy.getRawBits());
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
    return (rawbits);
}

void    Fixed::setRawBits(int const raw)
{
    rawbits = raw;
}

// Copy assignment operator overload
// Makes it so used defined data types (class and objects)
// is able to use the = operator, data on the right side
// is copied to the left side.
Fixed   &Fixed::operator=(const Fixed &f)
{
    std::cout << "copy assignment operator called" << std::endl;
    setRawBits(f.getRawBits());
    // returns reference to the object
    return (*this);
}

Fixed::Fixed(int const n)
{
    std::cout << "Int constructor called" << std::endl;
    rawbits = n << bits;
}

Fixed::Fixed(float const f)
{
    std::cout << "Float constructor called" << std::endl;
    rawbits = roundf(f * (1 << bits));
}

float   Fixed::toFloat(void) const
{
    return ((float)rawbits / (float)(1 << bits));
}

int Fixed::toInt(void) const
{
    return (rawbits >> bits);
}

// overloads the << operator - the stream insertion operator
// not the left bit shift operation (sad)
std::ostream    &operator<<(std::ostream &stream, const Fixed &f)
{
    stream << f.toFloat();
    return (stream);
}