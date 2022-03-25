#include <iostream>
#include <sstream>
#include <stdlib.h>

void	printChar(std::string arg) {
	std::string	pValue = "Non displayable";

	if (arg.size() > 0) {
		std::stringstream	ss;
		int					c;

		ss << arg;
		ss >> c;

		if (20 < c && c < 127) {
			pValue = "'";
			pValue += c;
			pValue += "'";
		}
	}

	std::cout << "char: " << pValue << std::endl;
}

void	printInt(std::string arg) {
	std::string	pValue = "impossible";

	if (arg.size() == 1 && arg[0] == '0')
		std::cout << "int: " << 0 << std::endl;
	if (arg.size() > 0) {
		int	n = atoi(arg.c_str());

		if (n != 0) {
			std::stringstream	ss;
			ss << n;
			ss >> pValue;
		}
	}

	std::cout << "int: " << pValue << std::endl;
}

// void	printFloat(std::string arg) {
// 	// if ( ) {
		
// 	// }
// 	int		errorMsg;
// 	float	pValue;
	
// 	std::cout
// 		<< "float: "
// 		<< (errorMsg ? "impossible" : pValue) << std::endl;
// }

int	main(int argc, char *argv[]) {
	if (argc != 2) {
		std::cerr << "The program need one argument!" << std::endl;
	} else {
		printChar(argv[1]);
		printInt(argv[1]);
		// printFloat(argv[1]);
		// printDouble(argv[1]);
	}
	return 0;
}
// ./convert 0
// char: Non displayable
// int: 0
// float: 0.0f
// double: 0.0


// ./convert nan
// char: impossible
// int: impossible
// float: nanf
// double: nan


// ./convert 42.0f
// char: '*'
// int: 42
// float: 42.0f
// double: 42.0
