#include "ScavTrap.hpp"

int	main()
{
	ClapTrap first("Clap");
	ScavTrap second("Scav");
	ScavTrap third = second;

	for (int i = 0; i < 5; i++)
		first.attack("wolf");
	std::cout << "\n";
	for (int i = 0; i < 11; i++)
		second.attack("pig");
	std::cout << "\n";
	for (int i = 0; i < 11; i++)
		third.takeDamage(20);
	std::cout << "\n";
	third.guardGate();

	return (0);
}
