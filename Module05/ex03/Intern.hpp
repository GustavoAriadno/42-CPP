#ifndef INTERN_HPP
#define INTERN_HPP

#define FORMS_QUANTITY 3

#include <iostream>
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern {
	public:
		Intern();
		Intern(const Intern &src);
		~Intern();
		Intern &operator=(const Intern &rhs);

		Form	*makeForm(std::string formName, std::string formTarget);
	private:
		std::string	target;

		class FormNotFindException : public std::exception
			{ virtual const char *what() const throw(); };
};

#endif