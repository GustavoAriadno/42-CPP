#include "Karen.hpp"

int main(int argc, char *argv[] ) {
	if (argc < 1 || argc > 2) return 0;

	Karen k;
	k.complain(argv[1]);

	return 0;
}
