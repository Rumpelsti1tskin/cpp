#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "A brain was created" << std::endl;

	return ;
}

Brain::~Brain()
{
	std::cout << "A brain was destroyed" << std::endl;

	return ;
}

Brain::Brain(const Brain &other)
{
	std::cout << "Copy constructor brain" << std::endl;

	*this = other;

	return ;
}

Brain	&Brain::operator=(const Brain &other)
{
	std::cout << "Copy assignment Brain" << std::endl;

	if (this != &other)
	{
		for (int i = 0; i < IDEA_NUM; ++i)
			this->ideas[i] = other.ideas[i];
	}

	return (*this);
}
