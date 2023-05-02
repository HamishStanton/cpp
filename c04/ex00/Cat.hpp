/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hstanton <hstanton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 05:34:24 by hstanton          #+#    #+#             */
/*   Updated: 2023/05/03 05:36:39 by hstanton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP

# define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
    private:

    public:
            Cat();
            Cat(const Cat &c);
            virtual ~Cat();
            Cat     &operator=(const Cat &c);
    
};

#endif