#include "Intern.hpp"

Intern::Intern() {}

Intern::Intern(const Intern &src) { *this = src; }

Intern::~Intern () {}

Intern	&Intern::operator=(const Intern &rhs) { return *this; }

Form	*Intern::makeForm(std::string formName, std::string formTarget) {
	return ;
}
