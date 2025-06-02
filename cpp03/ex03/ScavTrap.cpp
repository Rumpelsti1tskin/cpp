#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
	std::cout << "The default constructor for ScavTrap was called!" << std::endl;

	this->_hit_points = 100;
	this->_energy_points = 50;
	this->_attack_damage = 20;

	return ;
}

ScavTrap::ScavTrap(const std::string &name)
{
	std::cout << "The default constructor for ScavTrap " << name << " was called!" << std::endl;

	this->_hit_points = 100;
	this->_energy_points = 50;
	this->_attack_damage = 20;

	return ;
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other)
{
	*this = other;
	
	std::cout << "The copy constructor was called for ScavTrap : " << this->_name << std::endl;
	
	return ;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
	if (this != &other)
	{
		this->_name = other._name;
		this->_hit_points = other._hit_points;
		this->_energy_points = other._energy_points;
		this->_attack_damage = other._attack_damage;
	}
	
	std::cout << "The copy assignment operator was called for ScavTrap : " << this->_name << std::endl;
	
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "The default destructor was called for ScavTrap " << this->_name << std::endl;
}

void	ScavTrap::attack(const std::string &target)
{
	if (this->_hit_points > 0 && this->_energy_points > 0)
	{
		std::cout << "ScavTrap " << this->_name << " attacks " << target << " causing " << this->_attack_damage << " points of damage!" << std::endl;
		--this->_energy_points;

		//std::cout << this->_energy_points << " Points left" << std::endl;
	}
	else if (_hit_points <= 0)
		std::cout << "ScavTrap " << this->_name << " Can't attack, out of Hit Points" << std::endl;
	else if (_energy_points <= 0)
		std::cout << "ScavTrap " << this->_name << "Can't attack, out of Energy Points" << std::endl;

	return ;
}

void	ScavTrap::guardGate()
{
	std::cout << "The ScavTrap " << this->_name << " is in the Gate keeper mode now!" << std::endl;
}