#include "Zombie.hpp"

int main( void ) {
	Zombie *firstZb = new Zombie("Corongers20");
	firstZb->announce();

	Zombie *secondZb = firstZb->newZombie("Lil Child");
	secondZb->announce();
	
	secondZb->randomChump("333");
	return (0);
}