#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	clap_trap_1("Bob");
	ClapTrap	clap_trap_2("Dilan");

	//should be successfull
	clap_trap_1.attack("Dilan");

	//taking damage
	clap_trap_2.takeDamage(5);
	//should still be able to attack
	clap_trap_2.attack("Bob");
	//taking more damage
	clap_trap_2.takeDamage(10);
	//should not be able to attack, no hit points
	clap_trap_2.attack("Bob");

	//should repair
	clap_trap_2.beRepaired(5);

	//should be able to attack
	for (int i = 0; i < 8; ++i)
		clap_trap_2.attack("Bob");

	//should not be able to attack, no energy
	clap_trap_2.attack("Bob");
	
	return (0);
}