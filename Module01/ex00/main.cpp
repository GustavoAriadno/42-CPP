#include "Zombie.hpp"

int main( void ) {
	Zombie *firstZb = new Zombie("Corongers20");

	Zombie *secondZb = firstZb->newZombie("Lil Child");

	*secondZb->randomChump("The first to die");
	return (0);
}