/* Copyright (c) 2022 Caio Souza, Gustavo Ariadno. All rights reserved. */
/* 42 */

#include "ClapTrap.hpp"

#include <iostream>

ClapTrap::ClapTrap()
	: name("Clapinho"), hp(10), energyPoints(10), attackDamage(0)
	{ std::cout << "ClapTrap: default constructor called " << ClapTrap::name << std::endl; }

ClapTrap::~ClapTrap()
	{ std::cout << "ClapTrap: default destructor called " << ClapTrap::name << std::endl; }

ClapTrap::ClapTrap(ClapTrap const &src)
	{ *this = src; }


ClapTrap &ClapTrap::operator=(ClapTrap const &rhs) {
	this->name = rhs.name;
	this->hp = rhs.hp;
	this->energyPoints = rhs.energyPoints;
	this->attackDamage = rhs.attackDamage;
	return (*this);
}

ClapTrap::ClapTrap(std::string _name)
	: name(_name), hp(10), energyPoints(10), attackDamage(0)
	{ std::cout << "ClapTrap: parametrized constructor called: " << _name << std::endl; }

void ClapTrap::attack(const std::string &target) {
	if (ClapTrap::hp > 0 && ClapTrap::energyPoints > 0) {
		std::cout
			<< "ClapTrap: " << ClapTrap::name
			<< " attacks " << target
			<< ", causing " << ClapTrap::attackDamage
			<< " points of damage!"
		<< std::endl;

		ClapTrap::energyPoints--;
	}
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (ClapTrap::hp > 0) {
		std::cout
			<< "ClapTrap: " << ClapTrap::name
			<< " take " << amount
			<< " points of damage!"
		<< std::endl;

		ClapTrap::hp -= amount;
	}
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (ClapTrap::hp > 0 && ClapTrap::energyPoints > 0) {
		std::cout
			<< "ClapTrap: " << ClapTrap::name
			<< " repaired " << amount
			<< " points of damage!"
		<< std::endl;

		ClapTrap::hp += amount;
		ClapTrap::energyPoints--;
	}
}
