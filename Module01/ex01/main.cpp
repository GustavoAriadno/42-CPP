#include "Zombie.hpp"

int main( void ) {
	Zombie		initial;
	std::string	name = "Baka";
	int	hordeLen = 6;

	Zombie *horde = initial.zombieHorde(hordeLen, name);

	for (int i = 0; i < hordeLen; i++) {
		std::cout << i << " = ";
		horde[i].announce();
	}

	delete [] horde;
	return (0);
}
