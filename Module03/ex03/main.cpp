#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

#include <iostream>

void diamondTrap(void) {
	{
		DiamondTrap diamondTrap("gustav");

		for (unsigned int i = 0; i < 105; i++) {
			std::cout << i << " = ";
			diamondTrap.attack("cai");
			if (i >= 100) std::cout << std::endl;
		}
	}
	std::cout << "______________________________" << std::endl;
	{
		DiamondTrap diamondTrap("gustav");

		diamondTrap.takeDamage(99);
		diamondTrap.beRepaired(1);
		diamondTrap.takeDamage(99);
		diamondTrap.beRepaired(1);
	}
	std::cout << "______________________________" << std::endl;
	{
		DiamondTrap diamondTrap("gustav");

		for (unsigned int i = 0; i < 50; i++) {
			diamondTrap.beRepaired(1);
		}
		diamondTrap.attack("cai");
	}
	std::cout << "______________________________" << std::endl;
	{
		DiamondTrap diamondTrap("lenz");

		diamondTrap.whoAmI();
	}
}

void fragTrap(void) {
	{
		FragTrap fragtrap("gustav");

		for (unsigned int i = 0; i < 105; i++) {
			std::cout << i << " = ";
			fragtrap.attack("cai");
			if (i >= 100) std::cout << std::endl;
		}
	}
	std::cout << "______________________________" << std::endl;
	{
		FragTrap fragtrap("gustav");

		fragtrap.takeDamage(99);
		fragtrap.beRepaired(1);
		fragtrap.takeDamage(99);
		fragtrap.beRepaired(1);
	}
	std::cout << "______________________________" << std::endl;
	{
		FragTrap fragtrap("gustav");

		for (unsigned int i = 0; i < 50; i++) {
			fragtrap.beRepaired(1);
		}
		fragtrap.attack("cai");
	}
	std::cout << "______________________________" << std::endl;
	{
		FragTrap fragtrap("lenz");

		fragtrap.highFivesGuys();
	}
}

void scavTrap(void) {
	{
		ScavTrap scavtrap("gustav");

		for (unsigned int i = 0; i < 100; i++) {
			std::cout << i << " = ";
			scavtrap.attack("cai");
		}
	}
	std::cout << "______________________________" << std::endl;
	{
		ScavTrap scavtrap("gustav");

		scavtrap.takeDamage(99);
		scavtrap.beRepaired(1);
		scavtrap.takeDamage(99);
		scavtrap.beRepaired(1);
	}
	std::cout << "______________________________" << std::endl;
	{
		ScavTrap scavtrap("gustav");

		for (unsigned int i = 0; i < 50; i++) {
			scavtrap.beRepaired(1);
		}
		scavtrap.attack("cai");
	}
	std::cout << "______________________________" << std::endl;
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
	std::cout << "______________________________" << std::endl;
	{
		ClapTrap claptrap("gustav");

		claptrap.takeDamage(9);
		claptrap.beRepaired(1);
		claptrap.takeDamage(9);
		claptrap.beRepaired(1);
	}
	std::cout << "______________________________" << std::endl;
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
	// scavTrap();
	// fragTrap();
	diamondTrap();
	return (0);
}
