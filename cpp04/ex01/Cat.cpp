#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	std::cout << "A Cat has been created" << std::endl;
	
	this->brain = new Brain();

	return ;
}

Cat::~Cat() 
{
	std::cout << "You just killed the Cat " << this->_type << "! How dare you?" << std::endl;

	delete this->brain;

	return ;
}

Cat::Cat(const Cat &other) : Animal(other)
{
	*this = other;

	std::cout << "The copy Cat " << this->_type << " was created" << std::endl;

	return ;
}

Cat	&Cat::operator=(const Cat &other)
{
	if (this != &other)
	{
		this->_type = other._type;
		for (int i = 0; i < IDEA_NUM; ++i)
			this->brain[i] = other.brain[i];
	}

	std::cout << "The copy asignment called for " << this->_type << std::endl;

	return (*this);
}

void	Cat::makeSound()	const
{
	std::cout << "Meoww" << std::endl;

	return ;
}
