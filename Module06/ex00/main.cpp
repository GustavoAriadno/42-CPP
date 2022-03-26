#include <iostream>
#include <string>
#include <sstream>
#include <cstdlib>
#include <climits>
#include <limits>
#include <cmath>


void	printChar(std::string arg) {
	std::string	pValue = "Non displayable";

	if (arg.size() > 0 && arg.size() < 4) {
		std::stringstream	ss;
		char				c;

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
		pValue = "0";
	else if (arg.size() > 0) {
		long int	n = strtol(arg.c_str(), NULL, 10);

		if (n != 0 && n >= INT_MIN && n <= INT_MAX) {
			std::stringstream	ss;
			ss << n;
			ss >> pValue;
		}
	}
	std::cout << "int: " << pValue << std::endl;
}

//
//
//
//			DAR O MESMO QUE RECEBER
//			ARG.COMPARE(PVALUE);
//

void	printDouble(std::string arg) {
	std::string	pValue = "nan";
	double		num = atof(arg.c_str()),
				intPart = 1,
				fractPart = 1;

	std::stringstream	ss;
	ss << num;
	ss >> pValue;

	if (num != atof("inF") && num != atof("-inF"))
		fractPart = modf(num, &intPart);

	if (num == std::numeric_limits<float>::infinity())
		pValue = "+" + pValue;

	std::cout
		<< "double: " << pValue
		<< (fractPart == 0 ? ".0" : "")
		<< std::endl;
}


int	main(int argc, char *argv[]) {
	if (argc != 2) {
		std::cerr << "The program need one argument!" << std::endl;
	} else {
		printChar(argv[1]);
		printInt(argv[1]);
		// printFloat(argv[1]);
		printDouble(argv[1]);
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
