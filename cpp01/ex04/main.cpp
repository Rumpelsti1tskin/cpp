#include <iostream>
#include <fstream>
#include <string>

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Wrong argument amount" << std::endl;
		return (1);
	}

	std::string	fileName(argv[1]);
	std::string	mainStr(argv[2]);
	std::string	changeStr(argv[3]);
	std::string	outputFileName = fileName + ".replace";

	std::ifstream	inputFile;
	inputFile.open(fileName.c_str());
	if (!inputFile.is_open())
	{
		std::cout << "Cannot open the file" << std::endl;
		return (1);
	}

	std::ofstream	outputFile(outputFileName.c_str());


}