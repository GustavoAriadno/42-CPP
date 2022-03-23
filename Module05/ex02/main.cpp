#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"


int	main(void) {
	Bureaucrat				bureaucrat("Gariadno", 10);
	
	Form					*scf = new ShrubberyCreationForm("teste");
	
	
	std::cout << bureaucrat << std::endl;
	std::cout << *scf <<std::endl;
	scf->beSigned(bureaucrat);
	std::cout << *scf <<std::endl;
	scf->execute(bureaucrat);

	delete scf;
	return (0);
}