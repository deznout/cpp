#include "ClapTrap.hpp"

int	main()
{
	ClapTrap first("Clap");
	ClapTrap second(first);
	ClapTrap third = second;

	for (int i = 0; i < 11; i++)
		first.attack("wolf");
	std::cout << "\n";
	for (int i = 0; i < 11; i++)
		second.beRepaired(3);
	std::cout << "\n";
	for (int i = 0; i < 11; i++)
		third.takeDamage(7);

	return (0);
}
