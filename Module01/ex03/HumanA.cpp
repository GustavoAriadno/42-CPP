#include "HumanA.hpp"

HumanA::HumanA( std::string name, Weapon &w ): _weapon(w) { this->_name = name; }

void	HumanA::attack( void ) {
	std::cout <<
		this->_name << " attacks with their " << this->_weapon.getType()
	<< std::endl;
}
