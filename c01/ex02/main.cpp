/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hstanton <hstanton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 03:37:21 by hstanton          #+#    #+#             */
/*   Updated: 2023/05/01 03:41:37 by hstanton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string     *stringPTR = &str;
    std::string     &stringREF = str;

    std::cout << "Memory Addresses" << std::endl;
    std::cout << &str << std::endl;
    std::cout << stringPTR << std::endl;
    std::cout << &stringREF << std::endl;

    std::cout << "\nValues of string variables" << std::endl;
    std::cout << str << std::endl;
    std::cout << stringPTR << std::endl;
    std::cout << stringREF << std::endl;
}