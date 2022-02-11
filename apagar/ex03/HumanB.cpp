#include "HumanB.hpp"

HumanB::HumanB( std::string name) { this->_name = name; }

void	HumanB::setWeapon( Weapon &w ) { this->_weapon = &w; }

void	HumanB::attack( void ) {
	std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
}
