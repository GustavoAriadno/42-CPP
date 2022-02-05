#include <iostream>

int main( void ) {
	std::string	str = "HI THIS IS BRAIN";
	std::string	*strPTR = &str;
	std::string	&strREF = str;

	// ADDRESSES
	std::cout	<< &str		<< std::endl;
	std::cout	<< &strPTR	<< std::endl;
	std::cout	<< &strREF	<< std::endl;

	std::cout	<< std::endl;

	// VALUE
	std::cout	<< str		<< std::endl;
	std::cout	<< strPTR	<< std::endl;
	std::cout	<< strREF	<< std::endl;
	return (0);
}
