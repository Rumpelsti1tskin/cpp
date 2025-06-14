#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	std::cout << "A Dog has been created" << std::endl;
		
	this->brain = new Brain();

	return ;
}

Dog::~Dog()
{
	std::cout << "You just killed the Dog " << this->_type << "! How dare you?" << std::endl;

	delete this->brain;

	return ;
}

Dog::Dog(const Dog &other) : Animal(other)
{
	*this = other;

	std::cout << "The copy Dog " << this->_type << " was created" << std::endl;

	return ;
}

Dog	&Dog::operator=(const Dog &other)
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

void	Dog::makeSound()	const
{
	std::cout << "Wooff Wooff" << std::endl;

	return ;
}
