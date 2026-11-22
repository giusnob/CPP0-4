/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ginobile <ginobile@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/22 17:25:20 by ginobile          #+#    #+#             */
/*   Updated: 2026/11/22 15:17:08 by ginobile         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

int main(void)
{
	std::cout << "--- Construction ---" << std::endl;
	ClapTrap	clap("Clappy");
	ClapTrap	other("Trappy");

	std::cout << std::endl << "--- Attack, damage, repair ---" << std::endl;
	clap.attack("a bandit");
	clap.takeDamage(3);
	clap.beRepaired(2);

	std::cout << std::endl << "--- Running out of energy ---" << std::endl;
	for (int i = 0; i < 8; i++)
		clap.attack("a training dummy");
	clap.attack("a training dummy");
	clap.beRepaired(5);

	std::cout << std::endl << "--- Destroyed ---" << std::endl;
	other.takeDamage(15);
	other.attack("someone");
	other.beRepaired(5);
	other.takeDamage(1);

	std::cout << std::endl << "--- Destruction ---" << std::endl;
	return (0);
}