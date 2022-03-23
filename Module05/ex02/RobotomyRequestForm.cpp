#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm()
	: Form("ShrubberyCreation", 72, 45)
	{ this->target = "PADRON"; }

RobotomyRequestForm::RobotomyRequestForm(std::string _target)
	: Form("ShrubberyCreation", 72, 45)
	{ this->target = _target; }

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &src)
	: Form("ShrubberyCreation", 72, 45)
	{ *this = src; }

RobotomyRequestForm::~RobotomyRequestForm () {}

RobotomyRequestForm	&RobotomyRequestForm::operator=(const RobotomyRequestForm &rhs) {
	this->target = rhs.target;
	this->setIsSigned(rhs.getIsSigned());
	return *this;
}

void				RobotomyRequestForm::executeConcrete(void) const {
	srand((unsigned)time(NULL));

	std::cout << "PZZZZZZZZZZZ PZZZ PZ PZ" << std::endl;
	if (rand() % 2)
		std::cout << this->target << " has been robotomized" << std::endl;
	else
		std::cout << "The robotomy of " << this->target << " have failed" << std::endl;
}
