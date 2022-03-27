#include <iostream>
#include <string>
#include <sstream>
#include <cstdlib>
#include <climits>
#include <limits>
#include <cmath>
#include <cctype>

void	printChar(std::string arg) {
	std::string	pValue = "Non displayable";

	if (arg.size() == 1 && !isdigit(arg[0]) && isprint(arg[0])) {
		pValue = "'" + arg + "'";
	}
	else if (arg.size() > 1 && !isdigit(arg[0]))
		pValue = "impossible";
	else if (arg.size() > 0) {
		char c = static_cast<char>(std::atoi(arg.c_str()));

		if (isprint(c)) {
			pValue = "'";
			pValue += c;
			pValue += "'";
		}
	}

	std::cout << "char: " << pValue << std::endl;
}

void	printInt(std::string arg) {
	std::stringstream	ss;
	std::string			pValue = "impossible";
	long int			n = atol(arg.c_str());

	if (arg.size() == 1 && !isdigit(static_cast<char>(arg[0])))
		n = static_cast<int>(arg[0]);

	if ((n != 0 && n >= INT_MIN && n <= INT_MAX) ||
		(n == 0 && arg.size() > 0 && arg[0] == '0')) {
		ss << n;
		ss >> pValue;
	}

	std::cout << "int: " << pValue << std::endl;
}

void	printFloat(std::string arg) {
	std::stringstream	ss;
	std::string			pValue;
	double				num = atof(arg.c_str());

	if (arg.size() == 1 && !isdigit(arg[0]))
		num = static_cast<float>(arg[0]);

	ss << num;
	ss >> pValue;

	if (num == 0 && arg.size() != 1 && arg[0] != '0')
		pValue = "nanf";
	else {
		pValue += ((long double)num == (int)num) ? ".0f" : "f";
		
		if (num == std::numeric_limits<float>::infinity())
			pValue = "+" + pValue;
	}

	std::cout << "float: " << pValue << std::endl;
}


void	printDouble(std::string arg) {
	std::stringstream	ss;
	std::string			pValue;
	double				num = atof(arg.c_str());

	if (arg.size() == 1 && !isdigit(arg[0]))
		num = static_cast<double>(arg[0]);

	ss << num;
	ss >> pValue;

	if (num == 0 && arg.size() != 1 && arg[0] != '0')
		pValue = "nan";
	else if ((long double)num == (int)num)
		pValue += ".0";
	else if (num == std::numeric_limits<double>::infinity())
		pValue = "+" + pValue;

	std::cout << "double: " << pValue << std::endl;
}

int	main(int argc, char *argv[]) {
	if (argc != 2) {
		std::cerr << "This program needs one argument!" << std::endl;
	} else {
		printChar(argv[1]);
		printInt(argv[1]);
		printFloat(argv[1]);
		printDouble(argv[1]);
	}
	return 0;
}
