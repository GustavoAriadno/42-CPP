#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

#include "string"

class FragTrap : virtual public ClapTrap {
	public:
		FragTrap(void);
		FragTrap(FragTrap const &src);
		~FragTrap(void);
		FragTrap &operator=(FragTrap const &rhs);
		FragTrap(std::string name);
		void attack(const std::string &target);
		void highFivesGuys(void);
};

#endif
