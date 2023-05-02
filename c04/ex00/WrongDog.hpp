/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongDog.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hstanton <hstanton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 05:54:01 by hstanton          #+#    #+#             */
/*   Updated: 2023/05/03 05:56:13 by hstanton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGDOG_HPP

# define WRONGDOG_HPP

#include "WrongAnimal.hpp"

class WrongDog : public WrongAnimal
{
    private:

    public:
            WrongDog();
            WrongDog(const WrongDog &wd);
            virtual ~WrongDog();
            
            WrongDog    &operator=(const WrongDog &wd);
};

#endif