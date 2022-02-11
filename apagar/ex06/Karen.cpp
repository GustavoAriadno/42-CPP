#include "Karen.hpp"
typedef void (Karen::*pFunc) ( void );

void	Karen::debug( void ) { std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger.\nI really do!" << std::endl; }
void	Karen::info( void ) { std::cout << "I cannot believe adding extra bacon costs more money.\nYou didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl; }
void	Karen::warning( void ) { std::cout << "I think I deserve to have some extra bacon for free.\nI’ve been coming for years whereas you started working here since last month." << std::endl; }
void	Karen::error( void ) { std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl; }

void	Karen::complain( std::string level ) {
	pFunc		complains[4] = { &Karen::debug , &Karen::info , &Karen::warning , &Karen::error };
	std::string	levels[4] = { "DEBUG" , "INFO" , "WARNING" , "ERROR" };
	int i = 0;

	while (i < 4 && levels[i] != level) i++;
	if (i > 4) return ;

	switch(i) {
		case 0:
			std::cout << "[ " << levels[i++] << " ]" << std::endl;
			(this->*(complains[0]))();
			std::cout << std::endl;
			__attribute__ ((fallthrough));
		case 1:
			std::cout << "[ " << levels[i++] << " ]" << std::endl;
			(this->*(complains[1]))();
			std::cout << std::endl;
			__attribute__ ((fallthrough));
		case 2:
			std::cout << "[ " << levels[i++] << " ]" << std::endl;
			(this->*(complains[2]))();
			std::cout << std::endl;
			__attribute__ ((fallthrough));
		case 3:
			std::cout << "[ " << levels[i] << " ]" << std::endl;
			(this->*(complains[3]))();
			std::cout << std::endl;
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break;
	}

}
