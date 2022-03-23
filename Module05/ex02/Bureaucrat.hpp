#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <exception>
#include "Form.hpp"

class Form;

class Bureaucrat {
	public:
		Bureaucrat();
		Bureaucrat(const std::string _name, int _grade);
		Bureaucrat(const Bureaucrat &f);
		virtual ~Bureaucrat();
		Bureaucrat &operator=(const Bureaucrat &f);

		const std::string	getName() const;
		int					getGrade() const;
		void				promote();
		void				demote();

		void				signForm(Form &f);
		void				executeForm(Form const & form);
	private:
		const std::string	name;
		int					grade;
	
		class GradeTooHighException : public std::exception
			{ virtual const char *what() const throw(); };
		class GradeTooLowException : public std::exception
			{ virtual const char *what() const throw(); };
};

std::ostream &operator<<(std::ostream &stream, Bureaucrat const &rhs);

#endif