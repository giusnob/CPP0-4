/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ginobile <ginobile@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/22 17:38:24 by ginobile          #+#    #+#             */
/*   Updated: 2026/11/25 15:54:01 by ginobile         ###   ########.fr       */
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
		const Animal	*j = new Dog();
		const Animal	*i = new Cat();

		delete j;
		delete i;
	}

	std::cout << std::endl << "===== 2. Array of Animals =====" << std::endl;
	{
		const int	size = 4;
		Animal		*animals[size];

		for (int k = 0; k < size; k++)
		{
			if (k < size / 2)
				animals[k] = new Dog();
			else
				animals[k] = new Cat();
		}
		std::cout << std::endl;
		for (int k = 0; k < size; k++)
			animals[k]->makeSound();
		std::cout << std::endl;
		for (int k = 0; k < size; k++)
			delete animals[k];
	}

	std::cout << std::endl << "===== 3. Deep copy: copy constructor =====" << std::endl;
	{
		Dog	original;

		original.getBrain()->setIdea(0, "Chase the cat");
		Dog	copy(original);

		copy.getBrain()->setIdea(0, "Sleep all day");
		std::cout << "Original idea: " << original.getBrain()->getIdea(0) << std::endl;
		std::cout << "Copy idea:     " << copy.getBrain()->getIdea(0) << std::endl;
		std::cout << "Original brain: " << original.getBrain() << std::endl;
		std::cout << "Copy brain:     " << copy.getBrain() << std::endl;
	}

	std::cout << std::endl << "===== 4. Deep copy: assignment operator =====" << std::endl;
	{
		Cat	a;
		Cat	b;

		a.getBrain()->setIdea(0, "Eat fish");
		b = a;
		b.getBrain()->setIdea(0, "Knock things off the table");
		std::cout << "a idea: " << a.getBrain()->getIdea(0) << std::endl;
		std::cout << "b idea: " << b.getBrain()->getIdea(0) << std::endl;
		std::cout << "a brain: " << a.getBrain() << std::endl;
		std::cout << "b brain: " << b.getBrain() << std::endl;
	}

	std::cout << std::endl << "===== 5. Self-assignment =====" << std::endl;
	{
		Dog	dog;
		Dog	&sameDog = dog;

		dog.getBrain()->setIdea(0, "Still here");
		dog = sameDog;
		std::cout << "Idea after self-assignment: " << dog.getBrain()->getIdea(0) << std::endl;
	}
	return (0);
}
