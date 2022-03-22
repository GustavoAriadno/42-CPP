#include "Bureaucrat.hpp"
#include "Form.hpp"

int		main(void) {
	{
		Bureaucrat john("John", 2);
		Form casa("Vender a casa", 10, 10);
		std::cout << john << std::endl;
		std::cout << casa << std::endl;
		john.signForm(casa);
		std::cout << casa << std::endl;
	}
	{
		std::cout << "------------------------------------------------------" << std::endl;
		try {
			Form casa("Casa burguesa", 0, 0);
			std::cout << casa << std::endl;
		}
		catch (std::exception const &e) { std::cerr << e.what() << std::endl; }

		try {
			Form casa("Casa muito engraçada", 151, 151);
			std::cout << casa << std::endl;
		}
		catch (std::exception const &e) { std::cerr << e.what() << std::endl; }
	}
	{
		std::cout << "------------------------------------------------------" << std::endl;
		Bureaucrat john("John", 11);
		Form casa("Vender a casa", 10, 10);
		std::cout << john << std::endl;
		std::cout << casa << std::endl;
		try {
			john.signForm(casa);
			std::cout << casa << std::endl;
		}
		catch (std::exception const &e) { std::cerr << e.what() << std::endl; }
		try {
			john.promote();
			std::cout << john << std::endl;
			john.signForm(casa);
			std::cout << casa << std::endl;
		}
		catch (std::exception const &e) { std::cerr << e.what() << std::endl; }
	}
}