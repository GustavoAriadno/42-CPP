#include <iostream>
#include <fstream>

std::string	getFileText(std::ifstream &myfile)
{
	std::string		fileContent = "";
	std::string		line = "";

	while (getline (myfile, line)) {
		fileContent += line;
		if (!myfile.eof()) fileContent += '\n';
	}
	return fileContent;
}

std::string	replace(std::string toReplace, std::string s1, std::string s2, int i)
{
	std::string	replacedPart = toReplace;
	std::string	rest = "";

	i = replacedPart.find(s1);
	if (i != -1) {
		int	s1Len = s1.length();
		int	restLen = toReplace.length();

		replacedPart = toReplace.substr(0, i) + s2;
		rest = toReplace.substr(i + s1Len, restLen - s1Len);
		i = rest.find(s1);
	}
	return (i == -1)
		? replacedPart + rest
		: replacedPart + replace(rest, s1, s2, i);
}

int	main(int argc, char **argv)
{
	if (argc != 4) {
		std::cout <<
			"WRONG INPUT YOU IDIOT!!! 😡" << std::endl <<
			"Execute the program as the following:" << std::endl <<
			"./sed <fileName> <strToReplace> <strReplacer>" << std::endl;
		return 1;
	}
	std::string
		fileContent,
		fileName = argv[1],
		str1 = argv[2],
		str2 = argv[3];
	std::ifstream	myFile(argv[1]);

	if (myFile.fail()) {
		std::cout << "File " << fileName << " doesn't exist" << std::endl;
		return 1;
	}

	if (str1 == str2) { std::cout << "Are you serious? 🤦" << std::endl; }

	fileContent = getFileText(myFile);
	myFile.close();


	std::ofstream	newFile((fileName + ".replace").c_str());
	newFile << replace(fileContent, str1, str2, 0);
	newFile.close();
	return 0;
}
