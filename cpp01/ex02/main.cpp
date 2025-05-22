#include <iostream>
#include <string>

int	main(void)
{
	std::string	str = "HI THIS IS BRAIN";
	std::string	*stringPTR = &str;
	std::string	&stringREF = str;

	std::cout << "The address of string : " << &str << std::endl;
	std::cout << "The address held by stringPTR : " << stringPTR << std::endl;
	std::cout << "The address held by stringREF : " << &stringREF << std::endl;

	std::cout << "The value of the string : " << str << std::endl;
	std::cout << "The value pointed to by stringPTR : " << *stringPTR << std::endl;
	std::cout << "The value pointed to by stringREF : " << stringREF << std::endl;

	return (0);
}
