/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ginobile <ginobile@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/22 17:38:24 by ginobile          #+#    #+#             */
/*   Updated: 2026/11/25 14:57:45 by ginobile         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <iostream>

int	main(void)
{
	std::cout << "===== 1. Subject test =====" << std::endl;
	{
		const Animal	*meta = new Animal();
		const Animal	*j = new Dog();
		const Animal	*i = new Cat();

		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		i->makeSound();
		j->makeSound();
		meta->makeSound();

		delete meta;
		delete j;
		delete i;
	}

	std::cout << std::endl << "===== 2. Same test with wrong animals =====" << std::endl;
	{
		const WrongAnimal	*meta = new WrongAnimal();
		const WrongAnimal	*i = new WrongCat();

		std::cout << i->getType() << " " << std::endl;
		i->makeSound();
		meta->makeSound();

		delete meta;
		delete i;
	}

	std::cout << std::endl << "===== 3. Direct objects, no pointers =====" << std::endl;
	{
		WrongCat	wrongCat;
		Dog			dog;

		wrongCat.makeSound();
		dog.makeSound();
	}

	std::cout << std::endl << "===== 4. Polymorphism with a reference =====" << std::endl;
	{
		Cat				cat;
		const Animal	&ref = cat;

		ref.makeSound();
	}

	std::cout << std::endl << "===== 5. Copy constructor and assignment =====" << std::endl;
	{
		Dog	original;
		Dog	copy(original);
		Dog	assigned;

		assigned = original;
		std::cout << copy.getType() << " " << assigned.getType() << std::endl;
	}
	return (0);
}
