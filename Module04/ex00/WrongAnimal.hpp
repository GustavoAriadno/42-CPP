/* Copyright (c) 2022 Caio Souza, Gustavo Ariadno. All rights reserved. */
/* 42 */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <string>

class WrongAnimal {
	public:
		WrongAnimal(void);
		virtual ~WrongAnimal(void);
		WrongAnimal &operator=(WrongAnimal const &rhs);
		WrongAnimal(WrongAnimal const &src);
		void makeSound(void) const;
		std::string getType(void) const;
	protected:
		std::string type;
};

#endif
