#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
	public:
		Form();
		Form(const std::string _name, int reqToSign, int reqToExec);
		Form(const Form &f);
		~Form();
		Form &operator=(const Form &f);

		const std::string	getName() const;
		bool				getIsSigned() const;
		int					getRequiredToSign() const;
		int					getRequiredToExec() const;
		void				beSigned(Bureaucrat b);
	private:
		const std::string	name;
		bool				isSigned;
		const int			requiredToSign;
		const int			requiredToExec;
	
		class GradeTooHighException : public std::exception
			{ virtual const char *what() const throw(); };
		class GradeTooLowException : public std::exception
			{ virtual const char *what() const throw(); };
};

std::ostream &operator<<(std::ostream &stream, Form const &rhs);

#endif