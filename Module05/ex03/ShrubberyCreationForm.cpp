#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
	: Form("ShrubberyCreation", 145, 137)
	{ this->target = "PADRON"; }

ShrubberyCreationForm::ShrubberyCreationForm(std::string _target)
	: Form("ShrubberyCreation", 145, 137)
	{ this->target = _target; }

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &src)
	: Form("ShrubberyCreation", 145, 137)
	{ *this = src; }

ShrubberyCreationForm::~ShrubberyCreationForm () {}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(const ShrubberyCreationForm &rhs) {
	this->target = rhs.target;
	this->setIsSigned(rhs.getIsSigned());
	return *this;
}

void					ShrubberyCreationForm::executeConcrete(void) const {
	std::ofstream	newFile((this->target + "_shrubbery").c_str());

	newFile << "\n\
	               ,@@@@@@@,\n\
	       ,,,.   ,@@@@@@/@@,  .oo8888o.\n\
	    ,&%%%%&%&&%,@@@@@/@@@@@@,8888\\88/8o\n\
	   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'\n\
	   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'\n\
	   %&&%/ %&%%%%&&@@\\ V /@@' `88\\8 `/88'\n\
	   `&%\\ ` /%&'    |.|        \\ '|8'\n\
	       |o|        | |         | |\n\
	       |.|        | |         | |\n\
	jgs  \\/ ._\\//_/__/  ,\\_//__\\\\/.  \\_//__/_";

	newFile.close();
}
