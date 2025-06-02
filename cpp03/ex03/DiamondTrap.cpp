#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) : ClapTrap("default_clap_name")
{
	this->_name = "default";
	this->_hit_points = FragTrap::_hit_points;
	this->_energy_points = ScavTrap::_energy_points;
	this->_attack_damage = FragTrap::_attack_damage;

	std::cout << "The default DiamondTrap constructor was called" << std::endl;

	return ;
}

DiamondTrap::DiamondTrap(const std::string &name) : ClapTrap(name + "_clap_name"), _name(name)
{
	this->_hit_points = FragTrap::_hit_points;
	this->_energy_points = ScavTrap::_energy_points;
	this->_attack_damage = FragTrap::_attack_damage;

	std::cout << "The Default constructor for DiamondTrap " << this->_name << " was called" << std::endl;

	return ;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other) : ClapTrap(other), ScavTrap(other), FragTrap(other)
{
	*this = other;
	std::cout << "The copy constractor called for DiamondTrap " << this->_name << std::endl;

	return ;
}

DiamondTrap	&DiamondTrap::operator=(const DiamondTrap &other)
{
	if (this != &other)
	{
		this->_name = other._name;
		this->_hit_points = other._hit_points;
		this->_energy_points = other._energy_points;
		this->_attack_damage = other._attack_damage;
	}

	std::cout << "The assignment operator was called for DiamondTrap " << this->_name << " was called" << std::endl;

	return (*this);
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "The default destructor was called for DiamondTrap " << this->_name << std::endl;
}

void	DiamondTrap::attack(const std::string &target)
{
	ScavTrap::attack(target);

	return ;
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << "I am the DiamondTrap " << this->_name << " and my father is ClapTrap " << ClapTrap::_name << std::endl;

	return ;
}
