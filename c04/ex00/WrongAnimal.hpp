/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hstanton <hstanton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 05:38:03 by hstanton          #+#    #+#             */
/*   Updated: 2023/05/03 05:40:14 by hstanton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP

# define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
    protected:
            std::string type;
    
    public:
            WrongAnimal();
            WrongAnimal(const WrongAnimal &wa);
            virtual ~WrongAnimal();

            WrongAnimal     &operator=(const WrongAnimal &wa);

            std::string     getType() const;
            void    setType(std::string t);
            
            void    makeSound() const;
};

#endif