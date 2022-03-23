#include "Form.hpp"

#define HIGHEST_GRADE	1
#define LOWEST_GRADE	150

Form::Form() :
	name("Formin"),
	isSigned(false),
	requiredToSign(100),
	requiredToExec(100) {}

Form::Form(const std::string _name, int reqToSign, int reqToExec) :
	name(_name),
	isSigned(false),
	requiredToSign(reqToSign),
	requiredToExec(reqToExec) {
	if (reqToSign < HIGHEST_GRADE || reqToExec < HIGHEST_GRADE)
		throw Form::GradeTooHighException();
	if (reqToSign > LOWEST_GRADE || reqToExec > LOWEST_GRADE)
		throw Form::GradeTooLowException();
}

Form::Form(const Form &b) :
	name(b.name),
	isSigned(b.isSigned),
	requiredToSign(b.requiredToSign),
	requiredToExec(b.requiredToExec) {
	if (b.requiredToSign < HIGHEST_GRADE || b.requiredToExec < HIGHEST_GRADE)
		throw Form::GradeTooHighException();
	if (b.requiredToSign > LOWEST_GRADE || b.requiredToExec > LOWEST_GRADE)
		throw Form::GradeTooLowException();
}

Form::~Form () {}

Form	&Form::operator=(const Form &b) {
	this->isSigned = b.isSigned;
	return *this;
}

const std::string	Form::getName() const { return this->name; }
bool				Form::getIsSigned() const { return this->isSigned; }
int					Form::getRequiredToSign() const { return this->requiredToSign; }
int					Form::getRequiredToExec() const { return this->requiredToExec; }

void				Form::beSigned(Bureaucrat b) {
	if (this->getRequiredToSign() < b.getGrade())
		throw Form::GradeTooLowException();
	this->setIsSigned(true);
}

void				Form::execute(Bureaucrat const &executor) const {
	if (this->getRequiredToSign() < executor.getGrade() || this->getRequiredToExec() < executor.getGrade())
		throw Form::GradeTooLowException();
	this->executeConcrete();
}

const char			*Form::GradeTooHighException::what() const throw() { return "Grade too high!!!"; }
const char			*Form::GradeTooLowException::what() const throw() { return "Grade too low!!!"; }

std::ostream		&operator<<(std::ostream &stream, Form const &rhs) {
	std::cout
		<< rhs.getName() << ", is "
		<< ((rhs.getIsSigned()) ? "" : "not ") << "signed;\n"
		<< "Requires " << rhs.getRequiredToSign() << " to sign;\n"
		<< "Requires " << rhs.getRequiredToExec() << " to execute.\n";
	return stream;
}

void				Form::setIsSigned(bool val) { this->isSigned = val; }
