/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hstanton <hstanton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 05:16:31 by hstanton          #+#    #+#             */
/*   Updated: 2023/05/03 05:25:48 by hstanton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    return ;
}

FragTrap::FragTrap(std::string name)
{
    std::cout << "FragTrap is being constructed" << std::endl;
    this->name = name;
    this->hit = 100;
    this->energy = 100;
    this->att = 30;
}

FragTrap::FragTrap(const FragTrap &f) : ClapTrap()
{
    std::cout << "FragTrap copy constructor" << std::endl;
    setName(f.getName());
    setHit(f.getHit());
    setAttack(f.getAttack());
    setEnergy(f.getEnergy());
}

FragTrap::~FragTrap()
{
    std::cout << "exploded :O" << std::endl;
}

void    FragTrap::highFivesGuys(void)
{
    std::cout << "high five?" << std::endl;
    std::cout << "Pleaseeee?" << std::endl;
}

FragTrap    &FragTrap::operator=(const FragTrap &f)
{
    setName(f.getName());
    setAttack(f.getAttack());
    setHit(f.getHit());
    setEnergy(f.getEnergy());

    return (*this);
}

void    FragTrap::attack(std::string const &target)
{
    if (hitCheck(this->hit) || energyCheck(this->energy))
        return ;
    std::cout << this->name << " has " << this->energy << " energy left." << std::endl;
    std::cout << "FragTrap " << this->name << " attacks " << target << ", causing " << this->att << " point of damage!" << std::endl;
    setEnergy(this->energy - 1);
}