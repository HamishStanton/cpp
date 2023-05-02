/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hstanton <hstanton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 05:34:09 by hstanton          #+#    #+#             */
/*   Updated: 2023/05/03 06:01:38 by hstanton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat(const Cat &c) : Animal()
{
    std::cout << "Cat copy constructor called" << std::endl;
    setType(c.getType());
}

Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
}

Cat     &Cat::operator=(const Cat &c)
{
    setType(c.getType());
    return (*this);
}