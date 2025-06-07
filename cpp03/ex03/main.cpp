#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int	main(void)
{
	{
	std::cout << "First test start" << std::endl << std::endl;

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
	}
	{
	std::cout << std::endl << "Second test start" << std::endl << std::endl;
	
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
	}
	{
	std::cout << std::endl << "Third test start" << std::endl << std::endl;
	FragTrap	frag_trap("July");
	ClapTrap	clap_trap("Willy");

	for (int i = 0; i < 50; ++i)
	{
		frag_trap.attack("Willy");
		frag_trap.takeDamage(10);
		frag_trap.beRepaired(10);
	}
	frag_trap.attack("Willy");

	frag_trap.highFivesGuys();

	FragTrap	frag_copy(frag_trap);
	}
	{
	std::cout << std::endl << "Fourth test start" << std::endl << std::endl;
	
	DiamondTrap	diamond_trap;
	DiamondTrap	diamond_trap_1("Daniel");
	DiamondTrap	diamond_trap_2(diamond_trap_1);

	diamond_trap_1.attack("nobody");
	diamond_trap_1.whoAmI();

	diamond_trap_2.attack("somebody");
	diamond_trap_2.whoAmI();
	
	}
	return (0);
}