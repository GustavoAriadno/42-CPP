#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern : public Form {
	public:
		Intern();
		Intern(std::string _target);
		Intern(const Intern &src);
		virtual ~Intern();
		Intern &operator=(const Intern &rhs);

		Form	*makeForm(std::string formName, std::string formTarget);
	private:
		std::string	target;
};

#endif