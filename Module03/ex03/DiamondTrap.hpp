#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

#include "string"

class DiamondTrap : public ScavTrap, public FragTrap {
	public:
		DiamondTrap(void);
		DiamondTrap(DiamondTrap const &src);
		~DiamondTrap(void);
		DiamondTrap &operator=(DiamondTrap const &rhs);
		DiamondTrap(std::string name);
		void attack(const std::string &target);
		void whoAmI();
	private:
		std::string name;
};

#endif
