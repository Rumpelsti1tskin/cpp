#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>

# define IDEA_NUM 100

class	Brain
{
public :

	Brain();
	Brain(const Brain &other);
	Brain	&operator=(const Brain &other);
	~Brain();

private :

	std::string	ideas[IDEA_NUM];

};

#endif
