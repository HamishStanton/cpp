/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hstanton <hstanton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 05:59:53 by hstanton          #+#    #+#             */
/*   Updated: 2023/05/03 06:00:32 by hstanton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongDog.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;

	j->makeSound(); //will output the Cat sound!
	i->makeSound();

	meta->makeSound();

	delete i;
	delete j;
	delete meta;

	const	WrongAnimal *a = new WrongAnimal();
	const	WrongAnimal *b = new WrongDog();

	std::cout << b->getType() << " " << std::endl;

	a->makeSound();
	b->makeSound();

	delete b;
	delete a;

	return 0;
}