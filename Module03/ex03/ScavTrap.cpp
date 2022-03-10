#include <iostream>

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
	ScavTrap::name = "Scavinho";
	ScavTrap::hp = 100;
	ScavTrap::energyPoints = 50;
	ScavTrap::attackDamage = 20;
	std::cout << "ScavTrap: default constructor called " << ScavTrap::name << std::endl;
}

ScavTrap::ScavTrap(std::string name) {
	ScavTrap::name = name;
	ScavTrap::hp = 100;
	ScavTrap::energyPoints = 50;
	ScavTrap::attackDamage = 20;
	std::cout << "ScavTrap: parametrized constructor called " << ScavTrap::name << std::endl;
}

ScavTrap::~ScavTrap()
	{ std::cout << "ScavTrap: default destructor called " << ScavTrap::name << std::endl; }

ScavTrap::ScavTrap(ScavTrap const &src): ClapTrap(src)
	{ *this = src; }

ScavTrap &ScavTrap::operator=(ScavTrap const &rhs) {
	this->name = rhs.name;
	this->hp = rhs.hp;
	this->energyPoints = rhs.energyPoints;
	this->attackDamage = rhs.attackDamage;
	return (*this);
}

void ScavTrap::attack(const std::string &target) {
	if (ScavTrap::hp > 0 && ScavTrap::energyPoints > 0) {
		std::cout
			<< "ScavTrap: " << ScavTrap::name
			<< " attacks " << target
			<< ", causing " << ScavTrap::attackDamage
			<< " points of damage!"
		<< std::endl;

		ScavTrap::energyPoints--;
	}
}

void ScavTrap::guardGate()
	{ std::cout << "ScavTrap: " << ScavTrap::name << " is now in Gate keeper mode.." << std::endl; }
