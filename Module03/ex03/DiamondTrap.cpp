/* Copyright (c) 2022 Caio Souza, Gustavo Ariadno. All rights reserved. */
/* 42 */

#include <iostream>

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() {
	DiamondTrap::name = "Dima";
	DiamondTrap::hp = FragTrap::hp;
	DiamondTrap::energyPoints = ScavTrap::energyPoints;
	DiamondTrap::attackDamage = FragTrap::attackDamage;
	std::cout << "DiamondTrap: default constructor called" << DiamondTrap::name << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) {
	DiamondTrap::name = name + "_clap_name";
	DiamondTrap::hp = FragTrap::hp;
	DiamondTrap::energyPoints = ScavTrap::energyPoints;
	DiamondTrap::attackDamage = FragTrap::attackDamage;
	std::cout << "DiamondTrap: parametrized constructor called " << DiamondTrap::name << std::endl;
}

DiamondTrap::~DiamondTrap()
	{ std::cout << "DiamondTrap: default destructor called " << DiamondTrap::name << std::endl; }

DiamondTrap::DiamondTrap(DiamondTrap const &src): ClapTrap(src), ScavTrap(src), FragTrap(src)
	{ *this = src; }

DiamondTrap &DiamondTrap::operator=(DiamondTrap const &rhs) {
	this->name = rhs.name;
	this->hp = rhs.hp;
	this->energyPoints = rhs.energyPoints;
	this->attackDamage = rhs.attackDamage;
	return (*this);
}

void DiamondTrap::attack(const std::string &target) {
	if (DiamondTrap::hp > 0 && DiamondTrap::energyPoints > 0) {
		std::cout
			<< "DiamondTrap: " << DiamondTrap::name
			<< " attacks " << target
			<< ", causing " << DiamondTrap::attackDamage
			<< " points of damage!"
		<< std::endl;

		DiamondTrap::energyPoints--;
	}
}

void DiamondTrap::whoAmI() {
	std::cout
		<< "DiamondTrap: DiamondName " << DiamondTrap::name << std::endl
		<< " ClapName " << DiamondTrap::name << std::endl;
}
