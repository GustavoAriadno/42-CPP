/* Copyright (c) 2022 Caio Souza, Gustavo Ariadno. All rights reserved. */
/* 42 */

#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <string>

class AAnimal {
	public:
		AAnimal(void);
		virtual ~AAnimal(void);
		AAnimal &operator=(AAnimal const &rhs);
		AAnimal(AAnimal const &src);
		virtual void makeSound(void) const = 0;
		std::string getType(void) const;
	protected:
		std::string type;
};

#endif