#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main() 
{
	// Create a ClapTrap
	ClapTrap clapTrap("Clap");
	clapTrap.attack("enemy");
	clapTrap.takeDamage(50);
	clapTrap.beRepaired(30);

	// Create a ScavTrap
	ScavTrap scavTrap("Scav");
	scavTrap.attack("enemy");
	scavTrap.takeDamage(50);
	scavTrap.beRepaired(30);
	scavTrap.guardGate();

	// Create a FragTrap
	FragTrap fragTrap("Frag");
	fragTrap.attack("enemy");
	fragTrap.takeDamage(50);
	fragTrap.beRepaired(30);
	fragTrap.highFivesGuys();

	return 0;
}
