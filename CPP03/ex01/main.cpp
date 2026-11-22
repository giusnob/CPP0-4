/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ginobile <ginobile@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/22 17:25:20 by ginobile          #+#    #+#             */
/*   Updated: 2026/11/22 15:34:09 by ginobile         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

int	main(void)
{
	std::cout << "--- Construction ---" << std::endl;
	ScavTrap	scav("Serena");

	std::cout << std::endl << "--- Actions ---" << std::endl;
	scav.attack("a bandit");
	scav.takeDamage(30);
	scav.beRepaired(10);
	scav.guardGate();

	std::cout << std::endl << "--- Copy ---" << std::endl;
	ScavTrap	copy(scav);
	copy.attack("another bandit");

	std::cout << std::endl << "--- Destroyed ---" << std::endl;
	scav.takeDamage(200);
	scav.attack("someone");
	scav.beRepaired(10);

	std::cout << std::endl << "--- Destruction ---" << std::endl;
	return (0);
}
