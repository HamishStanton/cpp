/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hstanton <hstanton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 05:31:28 by hstanton          #+#    #+#             */
/*   Updated: 2023/05/03 06:03:50 by hstanton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal(const Animal &a)
{
    std::cout << "Animal copy constructor called" << std::endl;
    setType(a.getType());
}

Animal::~Animal()
{
    std::cout << "Animal Destructor called" << std::endl;
}

Animal  &Animal::operator=(const Animal &a)
{
    setType(a.getType());
    return (*this);
}

std::string     Animal::getType() const
{
    return (this->type);
}

void    Animal::setType(std::string t)
{
    this->type = t;
}

void    Animal::makeSound() const
{
    if (this->type == "Cat")
        std::cout << "MYEEEEWW!!" << std::endl;
    if (this->type == "Dog")
        std::cout << "BORF!!" << std::endl;
    return ;
}