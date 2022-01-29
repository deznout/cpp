#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int	main()
{
	ClapTrap first("Clap");
	ScavTrap second("Scav");
	FragTrap third("Frag");

	for (int i = 0; i < 3; i++)
		first.attack("wolf");
	std::cout << "\n";
	for (int i = 0; i < 3; i++)
		second.attack("pig");
	std::cout << "\n";
	for (int i = 0; i < 3; i++)
		third.takeDamage(20);
	std::cout << "\n";
	for (int i = 0; i < 3; i++)
		third.attack("frog");
	std::cout << "\n";
	third.highFivesGuys();

	return (0);
}
