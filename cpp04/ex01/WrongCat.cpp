#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
	std::cout << "A WrongCat has been created" << std::endl;
	
	return ;
}

WrongCat::~WrongCat()
{
	std::cout << "You just killed the WrongCat " << this->_type << "! How dare you?" << std::endl;

	return ;
}

WrongCat::WrongCat(const WrongCat &other) : WrongAnimal(other)
{
	*this = other;

	std::cout << "The copy WrongCat " << this->_type << " was created" << std::endl;

	return ;
}

WrongCat	&WrongCat::operator=(const WrongCat &other)
{
	if (this != &other)
	{
		this->_type = other._type;
	}

	std::cout << "The copy asignment called for " << this->_type << std::endl;

	return (*this);
}

void	WrongCat::makeSound()	const
{
	std::cout << "Booo" << std::endl;

	return ;
}
