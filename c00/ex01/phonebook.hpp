/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hstanton <hstanton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 20:10:05 by hstanton          #+#    #+#             */
/*   Updated: 2023/05/01 05:51:38 by hstanton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <string>

class Contacts
{
    private: 

    std::string firstname;
    std::string lastname;
    std::string nickname;
    std::string phonenumber;
    std::string deepestsec;
    
    public:
    // define all your functions here 

    //getter functions to obtain private variables
    std::string get_firstname();
    std::string get_lastname();
    std::string get_nickname();
    std::string get_phonenumber();
    std::string get_deepestsec();

    //setter functions to assign value to the private variables
    void set_firstname(std::string firstName);
    void set_lastname(std::string lastName);
    void set_nickname(std::string nickName);
    void set_phonenumber(std::string phoneNumber);
    void set_deepestsec(std::string deepestSec);
};

class Phonebook
{
    private:
        int n;
    
    public:
        Contacts cont[8];
        int     get_n();
        void    set_n(int i);
};

#endif