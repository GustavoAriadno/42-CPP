#include "Intern.hpp"

Intern::Intern() {}

Intern::Intern(const Intern &src) { (void)src; }

Intern::~Intern () {}

Intern	&Intern::operator=(const Intern &rhs) {
	(void)rhs;
	return *this;
}

const char			*Intern::FormNotFindException::what() const throw() { return "Form not found!"; }

Form	*Intern::makeForm(std::string newFormName, std::string formTarget) {
	std::string	formNames[] = { "shrubbery creation", "robotomy request", "presidential pardon" };
	Form		**forms = new Form*[FORMS_QUANTITY];
	forms[0] = new ShrubberyCreationForm(formTarget);
	forms[1] = new RobotomyRequestForm(formTarget);
	forms[2] = new PresidentialPardonForm(formTarget);
	Form		*returnForm;

	int i = 0;
	while (i < FORMS_QUANTITY && newFormName != formNames[i]) {
		delete forms[i];
		i++;
	}

	int j = i + 1;
	while (j < FORMS_QUANTITY) {
		delete forms[j];
		j++;
	}
	if (i == FORMS_QUANTITY) {
		delete [] forms;
		throw Intern::FormNotFindException();
	}

	returnForm = forms[i];
	delete [] forms;
	return (returnForm);
}
