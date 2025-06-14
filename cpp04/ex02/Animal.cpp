#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "An Animal has been created" << std::endl;
	this->_type = "Not identified";
	
	return ;
}

Animal::Animal(const std::string &type) : _type(type)
{
	std::cout << "An Animal of type " << this->_type << " has been created" << std::endl;

	return ;
}

Animal::~Animal()
{
	std::cout << "You just killed the Animal " << this->_type << "! How dare you?" << std::endl;

	return ;
}

Animal::Animal(const Animal &other)
{
	*this = other;

	std::cout << "The copy Animal " << this->_type << " was created" << std::endl;

	return ;
}

Animal	&Animal::operator=(const Animal &other)
{
	if (this != &other)
	{
		this->_type = other._type;
	}

	std::cout << "The copy asignment called for " << this->_type << std::endl;

	return (*this);
}

std::string	Animal::getType() const
{
	return (this->_type);
}
