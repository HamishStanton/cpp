/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hstanton <hstanton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 05:31:42 by hstanton          #+#    #+#             */
/*   Updated: 2023/05/03 05:33:55 by hstanton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP

# define ANIMAL_HPP

#include <iostream>
#include <string.h>

class Animal
{
    protected:
            std::string type;
    
    public:
            Animal();
            Animal(const Animal &a);
            virtual ~Animal();
            Animal  &operator=(const Animal &a);

            std::string     getType() const;
            void    setType(std::string t);
            
            void    makeSound() const;    
};

#endif