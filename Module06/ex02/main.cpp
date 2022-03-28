#include <iostream>
#include "Base.hpp"

#include <cstdlib>
#include <ctime>

Base	*generate(void) {
	srand((unsigned)time(NULL));

	Base	*base = NULL;
	int		r = std::rand() % 3;

	if (r == 0)
		base = new A();
	else if ( r == 1)
		base = new B();
	else
		base = new C();

	return (base);
}

void	identify(Base* p) {
	if (dynamic_cast<A *>(p))
		std::cout << "A";
	else if (dynamic_cast<B *>(p))
		std::cout << "B";
	else if (dynamic_cast<C *>(p))
		std::cout << "C";
	else
		std::cout << "NULL";

	std::cout << std::endl;
}

void	identify(Base& p) {
	try {
		A &a = dynamic_cast<A &>(p);
		(void)a;
		std::cout << "A";
	} catch (...) {}
	try {
		B &b = dynamic_cast<B &>(p);
		(void)b;
		std::cout << "B";
	} catch (...) {}
	try {
		C &c = dynamic_cast<C &>(p);
		(void)c;
		std::cout << "C";
	} catch (...) {}

	std::cout << std::endl;
}

int		main(void) {
	Base *b = generate();

	identify(b);
	identify(*b);

	delete b;
	return 0;
}