/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hstanton <hstanton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 05:35:15 by hstanton          #+#    #+#             */
/*   Updated: 2023/05/03 05:37:24 by hstanton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP

# define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
    private:

    public:
            Dog();
            Dog(const Dog &d);
            virtual ~Dog();
            Dog     &operator=(const Dog &d);
};

#endif