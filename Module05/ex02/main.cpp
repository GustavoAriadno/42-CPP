#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

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
	Form	*scf = new ShrubberyCreationForm("TESTE");
	Form	*rrf = new RobotomyRequestForm("TESTE");
	Form	*ppf = new PresidentialPardonForm("TESTE");

	std::cout << "////// ////// ////// ////// ////// ////// //////" << std::endl;
	testeThreeCases(*scf, 140);
	std::cout << "\n\n////// ////// ////// ////// ////// ////// //////" << std::endl;
	testeThreeCases(*rrf, 70);
	std::cout << "\n\n////// ////// ////// ////// ////// ////// //////" << std::endl;
	testeThreeCases(*ppf, 20);

	delete scf;
	delete rrf;
	delete ppf;
	return (0);
}