#include "Zombie.hpp"

Zombie::Zombie( void ) { this->_name = ""; }
Zombie::~Zombie( void ) {
	if (this->_name != "")
		std::cout << this->_name << " has died for the second time" << std::endl;
}

void	Zombie::announce( void ) { std::cout << this->_name << " BraiiiiiiinnnzzzZ..." << std::endl; }
void	Zombie::setName( std::string name ) { this->_name = name; }
