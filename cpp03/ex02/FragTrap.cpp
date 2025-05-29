#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ScavTrap()
{
	std::cout << "The default constructor for FragTrap was called!" << std::endl;

	this->_hit_points = 100;
	this->_energy_points = 100;
	this->_attack_damage = 30;

	return ;
}

FragTrap::FragTrap(const std::string &name) : ScavTrap(name)
{
	std::cout << "The default constructor for FragTrap " << name << " was called!" << std::endl;

	this->_hit_points = 100;
	this->_energy_points = 100;
	this->_attack_damage = 30;

	return ;
}

FragTrap::FragTrap(const FragTrap &other) : ScavTrap(other)
{
	std::cout << "The copy constructor was called for FragTrap : " << this->_name << std::endl;
	
	return ;
}

FragTrap &FragTrap::operator=(const FragTrap &other)
{
	if (this != &other)
	{
		this->_name = other._name;
		this->_hit_points = other._hit_points;
		this->_energy_points = other._energy_points;
		this->_attack_damage = other._attack_damage;
	}
	
	std::cout << "The copy assignment operator was called for FragTrap : " << this->_name << std::endl;
	
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "The default destructor was called for FragTrap " << this->_name << std::endl;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "The FragTrap " << this->_name << " wants to High Five, cause you are awesome!" << std::endl;
}