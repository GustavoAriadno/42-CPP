#include <iostream>

#include "FragTrap.hpp"

FragTrap::FragTrap(void) {
	FragTrap::name = "Fraginho";
	FragTrap::hp = 100;
	FragTrap::energyPoints = 100;
	FragTrap::attackDamage = 30;
	std::cout << "FragTrap: default constructor called" << FragTrap::name << std::endl;
}

FragTrap::FragTrap(std::string name) {
	FragTrap::name = name;
	FragTrap::hp = 100;
	FragTrap::energyPoints = 100;
	FragTrap::attackDamage = 30;
	std::cout << "FragTrap: parametrized constructor called " << FragTrap::name << std::endl;
}

FragTrap::~FragTrap()
	{ std::cout << "FragTrap: default destructor called " << FragTrap::name << std::endl; }

FragTrap::FragTrap(FragTrap const &src): ClapTrap(src)
	{ *this = src; }

FragTrap &FragTrap::operator=(FragTrap const &rhs) {
	this->name = rhs.name;
	this->hp = rhs.hp;
	this->energyPoints = rhs.energyPoints;
	this->attackDamage = rhs.attackDamage;
	return (*this);
}

void FragTrap::attack(const std::string &target) {
	if (FragTrap::hp > 0 && FragTrap::energyPoints > 0) {
		std::cout
			<< "FragTrap: " << FragTrap::name
			<< " attacks " << target
			<< ", causing " << FragTrap::attackDamage
			<< " points of damage!"
		<< std::endl;

		FragTrap::energyPoints--;
	}
}

void FragTrap::highFivesGuys(void)
	{ std::cout << "FragTrap: " << FragTrap::name << " raised a hand!" << std::endl; }
