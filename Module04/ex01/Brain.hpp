/* Copyright (c) 2022 Caio Souza, Gustavo Ariadno. All rights reserved. */
/* 42 */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>

class Brain {
	public:
		Brain(void);
		virtual ~Brain(void);
		Brain &operator=(Brain const &rhs);
		Brain(Brain const &src);
	protected:
	private:
		std::string ideas[100];
};

#endif
