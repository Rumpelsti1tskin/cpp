#include "Zombie.hpp"

Zombie::Zombie(void)
{
	std::cout << "A Zombie has been turned" << std::endl;
	return ;
}

Zombie::Zombie(std::string name) : name(name)
{
	std::cout << "Zombie " << this->name << " is turned" << std::endl;
	return ;
}

Zombie::~Zombie(void)
{
	std::cout << "Zombie " << this->name << " is dead" << std::endl;
	return ;
}

void	Zombie::announce(void)
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
	return ;
}

void	Zombie::giveName(std::string name)
{
	this->name = name;
	return ;
}
