#include <iostream>

int main(int argc, char *argv[])
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
		for (int i = 1; i < argc; i++) {
			std::string arg = argv[i];
			int len = arg.length();

			for (int j = 0; j < len; j++)
				arg[j] = toupper(arg[j]);

			std::cout << arg;
		}
	std::cout << std::endl;
	return 0;
}
