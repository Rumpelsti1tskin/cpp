#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "A WrongAnimal has been created" << std::endl;
	this->_type = "Not identified";
	
	return ;
}

WrongAnimal::WrongAnimal(const std::string &type) : _type(type)
{
	std::cout << "A WrongAnimal of type " << this->_type << " has been created" << std::endl;

	return ;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "You just killed the WrongAnimal " << this->_type << "! How dare you?" << std::endl;

	return ;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other)
{
	*this = other;

	std::cout << "The copy WrongAnimal " << this->_type << " was created" << std::endl;

	return ;
}

WrongAnimal	&WrongAnimal::operator=(const WrongAnimal &other)
{
	if (this != &other)
	{
		this->_type = other._type;
	}

	std::cout << "The copy asignment called for " << this->_type << std::endl;

	return (*this);
}

void	WrongAnimal::makeSound()	const
{
	std::cout << "I am nobody, nobody, nooooooooobody" << std::endl;

	return ;
}

std::string	WrongAnimal::getType() const
{
	return (this->_type);
}
