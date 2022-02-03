#include "Zombie.hpp"

void	Zombie::randomChump( std::string name ) {
	Zombie newZb = Zombie(name);
	newZb.announce();
}
