#include "Zombie.hpp"

int	main(void)
{
	Zombie		*horde;
	std::string	name;
	int			N;

	std::cout << "Enter the number of Zombies you wat to turn :" << std::endl;
	std::cin >> N;
	std::cout << "Enter the name of your Zombies :" << std::endl;
	std::cin >> name;

	horde = zombieHorde(N, name);

	for (int i = 0; i < N; ++i)
		horde[i].announce();
	
	delete [] (horde);

	return (0);
}