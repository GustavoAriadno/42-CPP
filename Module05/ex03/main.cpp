#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

void	signAndExec(Bureaucrat b, Form &f) {
	std::cout << b << std::endl;

	std::cout << f << std::endl;
	b.signForm(f);

	std::cout << f << std::endl;
	b.executeForm(f);

	std::cout << std::endl;
}

void	testeThreeCases(Form &form, int guigaGrade) {
	std::cout << "______ ______ VITO TRIES TO SIGN ______ ______" << std::endl;
	signAndExec(Bureaucrat("VITOVITO", 150), form);

	std::cout << "______ ______ ______ ______ ______ ______ ______" << std::endl;
	std::cout << "______ ______ GUIGA TRIES TO EXEC ______ ______" << std::endl;
	signAndExec(Bureaucrat("GUILHEMAR", guigaGrade), form);

	std::cout << "______ ______ ______ ______ ______ ______ ______" << std::endl;
	std::cout << "______ ______ CAIO TRIES TO EXEC ______ ______" << std::endl;
	signAndExec(Bureaucrat("CAIOLA", 1), form);
}

int		main(void) {
	Intern someRandomIntern;
	Form	*scf;
	Form	*rrf;
	Form	*ppf;
	
	scf = someRandomIntern.makeForm("shrubbery creation", "Bender");
	rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	ppf = someRandomIntern.makeForm("presidential pardon", "Bender");

	std::cout << "////// ////// ////// ////// ////// ////// //////" << std::endl;
	testeThreeCases(*scf, 140);
	std::cout << "////// ////// ////// ////// ////// ////// //////\n\n" << std::endl;
	testeThreeCases(*rrf, 70);
	std::cout << "////// ////// ////// ////// ////// ////// //////\n\n" << std::endl;
	testeThreeCases(*ppf, 20);
	std::cout << "////// ////// ////// ////// ////// ////// //////\n\n" << std::endl;



	std::string	wrongName = "BAKA";
	try {
		std::cout << "______ ______ ______ ______ ______ ______ ______" << std::endl;
		std::cout << "______ ______ ___ ERROR SIM ___ ______ ______" << std::endl;


		Form		*errorTest;
		errorTest = someRandomIntern.makeForm(wrongName, "Bender");
		testeThreeCases(*errorTest, 20);

		delete errorTest;
	}
	catch (std::exception const &e) {
		std::cout << "Couldn't create Form " << wrongName << " because " << e.what() << std::endl;
	}

	delete scf;
	delete rrf;
	delete ppf;
	return (0);
}