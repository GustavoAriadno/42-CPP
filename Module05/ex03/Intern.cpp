#include "Intern.hpp"

typedef Form* (Intern::*pFunc) ( std::string );

Intern::Intern() {}

Intern::Intern(const Intern &src) { (void)src; }

Intern::~Intern () {}

Intern		&Intern::operator=(const Intern &rhs) {
	(void)rhs;
	return *this;
}

Form	*Intern::scf(std::string target) { return (new ShrubberyCreationForm(target)); }
Form	*Intern::rrf(std::string target) { return (new RobotomyRequestForm(target)); }
Form	*Intern::ppf(std::string target) { return (new PresidentialPardonForm(target)); }

const char	*Intern::FormNotFindException::what() const throw() { return "Form not found!"; }

Form	*Intern::makeForm(std::string newFormName, std::string formTarget) {
	std::string	formNames[] = { "shrubbery creation", "robotomy request", "presidential pardon" };
	pFunc		genForms[FORMS_QUANTITY] = { &Intern::scf , &Intern::rrf , &Intern::ppf };

	int i = 0;
	while (i < FORMS_QUANTITY && newFormName != formNames[i]) i++;

	if (i == FORMS_QUANTITY) throw Intern::FormNotFindException();

	return ((this->*(genForms[i]))(formTarget));
}
