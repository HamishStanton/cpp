/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongDog.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hstanton <hstanton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 05:56:21 by hstanton          #+#    #+#             */
/*   Updated: 2023/05/03 06:03:35 by hstanton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongDog.hpp"

WrongDog::WrongDog()
{
    std::cout << "WrongDog constructor called" << std::endl;
}

WrongDog::WrongDog(const WrongDog &wd) : WrongAnimal()
{
    std::cout << "WrongDog copy constructor called" << std::endl;
    setType(wd.getType());
}

WrongDog::~WrongDog()
{
    std::cout << "WrongDog destructor called" << std::endl;
}

WrongDog    &WrongDog::operator=(const WrongDog &wd)
{
    setType(wd.getType());
    return (*this);
}