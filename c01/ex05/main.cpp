/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hstanton <hstanton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 04:23:56 by hstanton          #+#    #+#             */
/*   Updated: 2023/05/01 04:36:20 by hstanton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int     main()
{
    Harl    harl;
    std::string str;

    std::cout << "Please input either (DEBUG, INFO, WARNING, or ERROR) -- only takes capital letters" << std::endl;
    std::cin >> str;
    harl.complain(str);
    return (0);
}