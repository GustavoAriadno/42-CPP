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
	std::string	replacedContent = "";
	int			s1Len = 0;
	int			toReplaceLen = 0;

	s1Len = s1.length();
	toReplaceLen = toReplace.length();
	replacedContent =
		toReplace.substr(0, i) +
		s2 +
		toReplace.substr(i + s1Len, toReplaceLen - s1Len);
	return replacedContent;
}

std::string	getReplacedContent(std::string fileContent, std::string s1, std::string s2)
{
	std::string	replacedContent = fileContent;
	int			i = 0;

	i = replacedContent.find(s1);
	while (i != -1) {
		replacedContent = replace(replacedContent, s1, s2, i);
		i = replacedContent.find(s1);
	}
	return replacedContent;
}

int	main(int argc, char **argv)
{
	if (argc < 4 || argc > 4) {
		std::cout <<
			"WRONG INPUT YOU IDIOT!!!" << std::endl <<
			"Execute the program as the following:" << std::endl <<
			"./<exe> <fileName> <strToReplace> <strReplacer>" << std::endl;
		return 1;
	}

	std::string		fileContent;
	std::string		newFileName = argv[1];

	std::ifstream	myFile(argv[1]);
	if (myFile.fail()) {
		std::cout << "File doesn't exist" << std::endl;
		return 1;
	}
	fileContent = getFileText(myFile);
	myFile.close();


	std::ofstream	newFile((newFileName + ".replace").c_str());
	newFile << getReplacedContent(fileContent, argv[2], argv[3]);
	newFile.close();
	return 0;
}
