/* Copyright (c) 2022 Caio Souza, Gustavo Ariadno. All rights reserved. */
/* 42 */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

#include <iostream>

void scavTrap(void) {
	{
		ScavTrap scavtrap("gustav");

		for (unsigned int i = 0; i < 100; i++) {
			std::cout << i << std::endl;
			scavtrap.attack("cai");
		}
	}
	std::cout << "---------------" << std::endl;
	{
		ScavTrap scavtrap("gustav");

		scavtrap.takeDamage(99);
		scavtrap.beRepaired(1);
		scavtrap.takeDamage(99);
		scavtrap.beRepaired(1);
	}
	std::cout << "---------------" << std::endl;
	{
		ScavTrap scavtrap("gustav");

		for (unsigned int i = 0; i < 50; i++) {
			scavtrap.beRepaired(1);
		}
		scavtrap.attack("cai");
	}
	std::cout << "---------------" << std::endl;
	{
		ScavTrap scavtrap("lenz");

		scavtrap.guardGate();
	}
}

void clapTrap(void) {
	{
		ClapTrap claptrap("gustav");

		for (unsigned int i = 0; i < 100; i++) {
			claptrap.attack("cai");
		}
	}
	std::cout << "---------------" << std::endl;
	{
		ClapTrap claptrap("gustav");

		claptrap.takeDamage(9);
		claptrap.beRepaired(1);
		claptrap.takeDamage(9);
		claptrap.beRepaired(1);
	}
	std::cout << "---------------" << std::endl;
	{
		ClapTrap claptrap("gustav");

		for (unsigned int i = 0; i < 10; i++) {
			claptrap.beRepaired(1);
		}
		claptrap.attack("cai");
	}
}

int main(void) {
	//clapTrap();
	scavTrap();
	return (0);
}
