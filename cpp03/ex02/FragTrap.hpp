#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ScavTrap.hpp"

class	FragTrap : public ScavTrap
{
public :

	FragTrap(void);
	FragTrap(const std::string &name);
	FragTrap(const FragTrap &other);
	FragTrap &operator=(const FragTrap &other);
	~FragTrap();

	void	highFivesGuys(void);

};

#endif