/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hstanton <hstanton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 20:51:45 by hstanton          #+#    #+#             */
/*   Updated: 2023/05/01 05:51:33 by hstanton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cctype>
#include "phonebook.hpp"

// resizes the text of inputs
void    ft_resize(std::string info)
{
    std::cout << "|";
    if (info.size() > 10)
    {
        info.resize(9);
        std::cout << info << ".";
    }
    else
    {
        while (info.size() < 10)
        {
            info.append(" ");
        }
        std::cout << info;
    }
}

int Phonebook::get_n()
{
    return (n);
}

void    Phonebook::set_n(int i)
{
    n = i;
}

int main()
{
    Phonebook phone;
    Contacts contact;
    int i;
    int x;
    //int last_i = 0;
    std::string input;

    phone.set_n(0);

    while (1)
    {
        std::cout << "input ADD, SEARCH, or EXIT" << std::endl;
        std::cin >> input;

        if (input == "ADD")
        {
            std::cin.clear();
            std::cin.ignore(1000, '\n');

            std::cout << "one word inputs only please <3" << std::endl;
            //last_i++;
            for (i = 7; i > 0; i--)
            {
                phone.cont[i] = phone.cont[i - 1];
            }
            std::cout << "first name: ";
            std::getline (std::cin, input);
            phone.cont[0].set_firstname(input);

            std::cout << "last name: ";
            std::getline (std::cin, input);
            phone.cont[0].set_lastname(input);

            std::cout << "nickname: ";
            std::getline (std::cin, input);
            phone.cont[0].set_nickname(input);
            
            std::cout << "phone number: ";
            std::getline (std::cin, input);
            phone.cont[0].set_phonenumber(input);
            
            std::cout << "darkest secret: ";
            std::getline (std::cin, input);
            phone.cont[0].set_deepestsec(input);
            
            if (phone.get_n() < 8)
            {
                phone.set_n(phone.get_n() + 1);
            }       
        }
        else if (input == "SEARCH")
        {
            for (i = 0; i < phone.get_n(); i++)
            {
                std::cout << i + 1;
                ft_resize(phone.cont[i].get_firstname());
                ft_resize(phone.cont[i].get_lastname());
                ft_resize(phone.cont[i].get_nickname());
                std::cout << "\n";
            }
            std::cout << "Input index number: " << std::endl;
            std::cin >> x;
            if (x)
            {
                x = x - 1;
                if (x < -1 || x > phone.get_n())
                {
                    std::cout << "Invalid input" << std::endl;
                }
                else if (x < phone.get_n())
                {
                    std::cout << "\nContact:" << "\n" << phone.cont[x].get_firstname() << "\n" << phone.cont[x].get_lastname() << "\n" << phone.cont[x].get_nickname() << "\n" << phone.cont[x].get_phonenumber() << "\n" << phone.cont[x].get_deepestsec() << "\n" << std::endl;
                }
            }
            else
            {
                std::cout << "Digits only" << std::endl;
                std::cin.clear();
                std::cin.ignore(2, '\n');
            }
        }
        else if (input == "EXIT")
        {
            break;
        }
        else
        {
            std::cout << "Invalid input" << std::endl;
        }
    }
}

// implent your getter and setter functions here 

//need an array of class strings for contacts (private)

//get functions to obtain private variables
std::string Contacts::get_firstname()
{
    return (firstname);
}
std::string Contacts::get_lastname()
{
    return (lastname);
}
std::string Contacts::get_nickname()
{
    return (nickname);
}
std::string Contacts::get_phonenumber()
{
    return (phonenumber);
}
std::string Contacts::get_deepestsec()
{
    return (deepestsec);
}

//set functions to assign value to private variables
void Contacts::set_firstname(std::string firstName)
{
    firstname = firstName;
}
void Contacts::set_lastname(std::string lastName)
{
    lastname = lastName;
}
void Contacts::set_nickname(std::string nickName)
{
    nickname = nickName;
}
void Contacts::set_phonenumber(std::string phoneNumber)
{
    phonenumber = phoneNumber;
}
void Contacts::set_deepestsec(std::string deepestSec)
{
    deepestsec = deepestSec;
}