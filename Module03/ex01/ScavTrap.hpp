/* Copyright (c) 2022 Caio Souza, Gustavo Ariadno. All rights reserved. */
/* 42 */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

#include "string"

class ScavTrap : public ClapTrap {
	public:
		ScavTrap(void);
		ScavTrap(ScavTrap const &src);
		~ScavTrap(void);
		ScavTrap &operator=(ScavTrap const &rhs);
		ScavTrap(std::string name);
		void guardGate();
};

#endif
