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

	if (mainStr.empty())
	{
		std::cout << "The string you want to change is not specified" << std::endl;
		return (1);
	}

	std::ifstream	inputFile(fileName.c_str());
	if (!inputFile.is_open())
	{
		std::cout << "Cannot open the file" << std::endl;
		return (1);
	}
	
	std::ofstream	outputFile(outputFileName.c_str());
	if (!outputFile.is_open())
	{
		std::cout << "Cannot create the file" << std::endl;
		return (1);
	}

	std::string	tempLine;
	std::string	full;
	std::size_t	index = 0;

	while (getline(inputFile, tempLine))
	{
		if (!full.empty())
			full += "\n";
		full += tempLine;
	}

	while ((index = full.find(mainStr, index)) != std::string::npos)
	{
		full.erase(index, mainStr.size());
		full.insert(index, changeStr);
		index += changeStr.size();
	}

	outputFile << full;

	inputFile.close();
	outputFile.close();
	return (0);
}