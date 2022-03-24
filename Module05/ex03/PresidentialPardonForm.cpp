#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
	: Form("PresidentialPardon", 25, 5)
	{ this->target = "PADRON"; }

PresidentialPardonForm::PresidentialPardonForm(std::string _target)
	: Form("PresidentialPardon", 25, 5)
	{ this->target = _target; }

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &src)
	: Form("PresidentialPardon", 25, 5)
	{ *this = src; }

PresidentialPardonForm::~PresidentialPardonForm () {}

PresidentialPardonForm	&PresidentialPardonForm::operator=(const PresidentialPardonForm &rhs) {
	this->target = rhs.target;
	this->setIsSigned(rhs.getIsSigned());
	return *this;
}

void					PresidentialPardonForm::executeConcrete(void) const {
	std::cout << this->target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}
