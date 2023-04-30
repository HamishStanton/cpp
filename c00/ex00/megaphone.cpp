/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hstanton <hstanton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 20:51:55 by hstanton          #+#    #+#             */
/*   Updated: 2023/05/01 05:50:14 by hstanton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int main(int argc, char **argv) 
{
    int i;
    int j;

    if (argc == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
        return (0);
    }
    i = 1;
    while (i < argc)
    {
        j = 0;
        while (argv[i][j])
        {
            std::cout << (char)toupper(argv[i][j]);
            j++;
        }
        i++;
    }
    std::cout << "\n";
    return (0);
}