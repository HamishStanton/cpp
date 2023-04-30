/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hstanton <hstanton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 04:40:02 by hstanton          #+#    #+#             */
/*   Updated: 2023/05/01 05:14:38 by hstanton         ###   ########.fr       */
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
    std::cout << "getRawBits member function called" << std::endl;
    return (rawbits);
}

void Fixed::setRawBits(int const raw)
{
    rawbits = raw;
}

// Copy assignment operator overload
// makes it so user defined data types (class and objects)
// is able to use the = operator, data on the right side
// is copied to the left side.
Fixed   &Fixed::operator=(const Fixed &f)
{
    std::cout << "Copy assignment operator called" << std::endl;
    setRawBits(f.getRawBits());
    // returns reference to the object
    return (*this);
}