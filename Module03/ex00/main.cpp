/* Copyright (c) 2022 Caio Souza, Gustavo Ariadno. All rights reserved. */
/* 42 */

#include "ClapTrap.hpp"

int clapTrap(void) {
	{
		ClapTrap claptrap("gustav");

		for (unsigned int i = 0; i < 100; i++) {
			claptrap.attack("cai");
		}
	}
	{
		ClapTrap claptrap("gustav");

		claptrap.takeDamage(9);
		claptrap.beRepaired(1);
		claptrap.takeDamage(9);
		claptrap.beRepaired(1);
	}
	{
		ClapTrap claptrap("gustav");

		for (unsigned int i = 0; i < 10; i++) {
			claptrap.beRepaired(1);
		}
		claptrap.attack("cai");
	}
	return (0);
}

int main(void) {
	clapTrap();
	return (0);
}
