/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hstanton <hstanton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 05:35:01 by hstanton          #+#    #+#             */
/*   Updated: 2023/05/03 06:03:10 by hstanton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog(const Dog &d) : Animal()
{
    std::cout << "Dog copy constructor called" << std::endl;
    setType(d.getType());
}

Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
}

Dog     &Dog::operator=(const Dog &d)
{
    setType(d.getType());
    return (*this);
}