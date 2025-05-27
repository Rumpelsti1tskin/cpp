#include "ClapTrap.hpp"

ClapTrap::ClapTrap(const std::string &name) : _name(name), _hit_points(10), _energy_points(10), _attack_damage(0)
{
	std::cout << "The default constructor was called for : " << this->_name << std::endl;

	return ;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
	this->_name = other._name;
	this->_hit_points = other._hit_points;
	this->_energy_points = other._energy_points;
	this->_attack_damage = other._attack_damage;
	
	std::cout << "The copy constructor was called for : " << this->_name << std::endl;
	
	return ;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &other)
{
	if (this != &other)
	{
		this->_name = other._name;
		this->_hit_points = other._hit_points;
		this->_energy_points = other._energy_points;
		this->_attack_damage = other._attack_damage;
	}

	std::cout << "The copy assignment operator was called for : " << this->_name << std::endl;

	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "The default destructor was called for : " << _name << std::endl;

	return ;
}

void	ClapTrap::attack(const std::string &target)
{
	if (this->_hit_points > 0 && this->_energy_points > 0)
	{
		std::cout << "ClapTrap " << this->_name << " attacks " << target << " causing " << this->_attack_damage << " points of damage!" << std::endl;
		--this->_energy_points;

		//std::cout << this->_energy_points << " Points left" << std::endl;
	}
	else if (_hit_points <= 0)
		std::cout << "Can't attack, out of Hit Points" << std::endl;
	else if (_energy_points <= 0)
		std::cout << "Can't attack, out of Energy Points" << std::endl;

	return ;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << this->_name << " takes " << amount << " damage!" << std::endl;
	this->_hit_points -= amount;

	if (this->_hit_points < 0)
		this->_hit_points = 0;

	return ;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energy_points <= 0)
	{
		std::cout << "Out of Energy Points. Can't repair" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->_name << " repairs for " << amount << " Points!" << std::endl;
	this->_hit_points += amount;
	--this->_energy_points;

	//std::cout << this->_energy_points << " Points left" << std::endl;

	return ;
}
