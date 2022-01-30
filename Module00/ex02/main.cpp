#include <iostream>
#include "Account.hpp"

void		foo(void) {
	Account bar(42);
}

int			main(void)
{
	Account ac(42);
	foo();
	Account zx(2);
	Account cc(99);
	return 0;
}
