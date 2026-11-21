/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ginobile <ginobile@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/22 17:25:20 by ginobile          #+#    #+#             */
/*   Updated: 2026/11/21 00:11:10 by ginobile         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

int main(void)
{
	Zombie *heapZombie;

	std::cout << "--- Heap zombie ---" << std::endl;
	heapZombie = newZombie("Foo");
	heapZombie->announce();

	std::cout << "--- Stack zombie ---" << std::endl;
	randomChump("Bar");

	std::cout << "--- Deleting heap zombie ---" << std::endl;
	delete heapZombie;
	return (0);
}