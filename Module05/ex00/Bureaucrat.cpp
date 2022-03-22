#include "Bureaucrat.hpp"

#define HIGHEST_GRADE	1
#define LOWEST_GRADE	150

Bureaucrat::Bureaucrat(): name("Mob"), grade(100) {}

Bureaucrat::Bureaucrat(const std::string _name, int _grade): name(_name), grade(_grade) {
	if (_grade < HIGHEST_GRADE) throw Bureaucrat::GradeTooHighException();
	if (_grade > LOWEST_GRADE) throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat &b): name(b.name), grade(b.grade) {
	if (grade < HIGHEST_GRADE) throw Bureaucrat::GradeTooHighException();
	if (grade > LOWEST_GRADE) throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::~Bureaucrat () {}

Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &b) {
	this->grade = b.grade;
	return *this;
}

const std::string	Bureaucrat::getName() const { return this->name; }

int			Bureaucrat::getGrade() const { return this->grade; }

void		Bureaucrat::promote() {
	if (getGrade() == HIGHEST_GRADE) throw Bureaucrat::GradeTooHighException();
	this->grade++;
}

void	Bureaucrat::demote() {
	if (getGrade() == LOWEST_GRADE) throw Bureaucrat::GradeTooLowException();
	this->grade--;
}

const char *Bureaucrat::GradeTooHighException::what() const throw() { return "Grade too high!!!"; }
const char *Bureaucrat::GradeTooLowException::what() const throw() { return "Grade too low!!!"; }

std::ostream &operator<<(std::ostream &stream, Bureaucrat const &rhs) {
	std::cout
		<< rhs.getName() << ", "
		<< "bureaucrat grade " << rhs.getGrade() << ".\n";
	return stream;
}
