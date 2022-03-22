// by: Vito GOmes

#include "Bureaucrat.hpp"

int		main(void) {
	{
		std::cout << "[Simple Tests for Simple problems]\n" << std::endl;
		Bureaucrat John("John", 2);
		std::cout << John << std::endl;
		John.promote();
		std::cout << John << std::endl;
		John.demote();
		std::cout << John << std::endl;
	}
	{
		std::cout << "------------------------------------------------------" << std::endl;
		std::cout << "[Respects when Trying to Catch a Cat]" << std::endl;
		std::cout << "------------------------------------------------------" << std::endl;
		std::cout << "[Zero! Above the best!]\n" << std::endl;
		try {
			Bureaucrat bureaucrat("Zero", 0);
			std::cout << bureaucrat << std::endl;
		}
		catch (std::exception const &e) {
			std::cerr << e.what() << std::endl;
		}
	}
	{
		std::cout << "------------------------------------------------------" << std::endl;
		std::cout << "[Lower than the ground?]\n" << std::endl;
		try {
			Bureaucrat bureaucrat("Lowie", 151);
			std::cout << bureaucrat << std::endl;
		}
		catch (std::exception const &e) {
			std::cerr << e.what() << std::endl;
		}
	}
	{
		std::cout << "------------------------------------------------------" << std::endl;
		std::cout << "[Even bestowing the best?]\n" << std::endl;
		Bureaucrat bureaucrat("Alan", 1);
		std::cout << bureaucrat;
		try {
			bureaucrat.promote();
			std::cout << bureaucrat << std::endl;
		}
		catch (std::exception const &e) {
			std::cerr << e.what() << std::endl;
		}
	}
	{
		std::cout << "------------------------------------------------------" << std::endl;
		std::cout << "[Or decreasing more than the least?]\n" << std::endl;
		Bureaucrat bureaucrat("Drowner", 150);
		std::cout << bureaucrat << std::endl;
		try {
			bureaucrat.demote();
			std::cout << bureaucrat << std::endl;
		}
		catch (std::exception const &e) {
			std::cerr << e.what() << std::endl;
		}
	}
}