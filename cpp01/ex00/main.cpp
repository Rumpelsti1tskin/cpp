#include "Zombie.hpp"

int	main(void)
{
	std::string	name1;
	std::string	name2;
	Zombie		*allocZomb;

	std::cout << "Enter the name for non-dinamic Zombie :" << std::endl;
	std::cin >> name1;
	randomChump(name1);

	std::cout << "Enter the name for dinamic Zombie :" << std::endl;
	std::cin >> name2;
	allocZomb = newZombie(name2);
	allocZomb->announce();
	delete (allocZomb);

	return (0);
}