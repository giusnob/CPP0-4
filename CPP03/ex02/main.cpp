/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ginobile <ginobile@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/22 17:25:20 by ginobile          #+#    #+#             */
/*   Updated: 2026/11/22 15:52:13 by ginobile         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>

int	main(void)
{
	std::cout << "--- Construction ---" << std::endl;
	ClapTrap	clap("Clappy");
	ScavTrap	scav("Serena");
	FragTrap	frag("Fraggy");

	std::cout << std::endl << "--- Attacks ---" << std::endl;
	clap.attack("a bandit");
	scav.attack("a bandit");
	frag.attack("a bandit");

	std::cout << std::endl << "--- Special abilities ---" << std::endl;
	scav.guardGate();
	frag.highFivesGuys();

	std::cout << std::endl << "--- FragTrap damage and repair ---" << std::endl;
	frag.takeDamage(40);
	frag.beRepaired(15);
	frag.takeDamage(500);
	frag.attack("someone");

	std::cout << std::endl << "--- Copy ---" << std::endl;
	FragTrap	copy(frag);

	std::cout << std::endl << "--- Destruction ---" << std::endl;
	return (0);
}
