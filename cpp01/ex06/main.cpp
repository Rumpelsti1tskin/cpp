#include "Harl.hpp"

int	main(int argc, char **argv)
{
	Harl		Harl;

	if (argc != 2)
	{
		std::cout << "Dude, you're doing something wrong" << std::endl;
		return (1);
	}

	Harl.complain(argv[1]);
	return (0);
}