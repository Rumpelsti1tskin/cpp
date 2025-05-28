#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	ClapTrap	clap_trap("Bob");	
	ScavTrap	scav_trap("Fred");

	//should be able to attack
	scav_trap.attack("Bob");
	//should write that is in guard mode
	scav_trap.guardGate();
	scav_trap.takeDamage(50);
	scav_trap.beRepaired(20);

	for (int i = 0; i < 48; ++i)
		scav_trap.attack("Bob");
	
	//should not be able to attack
	scav_trap.attack("Bob");

	ScavTrap	scav_copy(scav_trap);

	return (0);
}