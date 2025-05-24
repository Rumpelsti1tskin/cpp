#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type)
{
	return ;
}

Weapon::Weapon()
{
	return ;
}

Weapon::~Weapon()
{
	return;
}

const std::string	&Weapon::getType()
{
	std::string	&ref = this->_type;
	
	return (ref);
}

void	Weapon::setType(std::string type)
{
	this->_type = type;

	return ;
}
