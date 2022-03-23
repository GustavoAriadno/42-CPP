#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
	: Form("ShrubberyCreation", 145, 137)
	{ this->target = "PADRON"; }

ShrubberyCreationForm::ShrubberyCreationForm(std::string _target)
	: Form("ShrubberyCreation", 145, 137)
	{ this->target = _target; }

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &b)
	: Form("ShrubberyCreation", 145, 137) {
		this->target = b.target; 
		this->setIsSigned(b.getIsSigned());
}

ShrubberyCreationForm::~ShrubberyCreationForm () {}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(const ShrubberyCreationForm &b) {
	this->setIsSigned(b.getIsSigned());
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
	jgs \\/ ._\\//_/__/  ,\\_//__\\\\/.  \\_//__/_";
}

// bool		ShrubberyCreationForm::getIsFormSigned() const {
// 	return Form::getIsSigned();
// }
