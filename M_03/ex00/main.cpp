#include "ClapTrap.hpp"

int	main()
{
	ClapTrap first("Clap");
	ClapTrap second(first);
	ClapTrap third = second;

	std::cout << &first << std::endl;
	std::cout << &second << std::endl;
	std::cout << &third << std::endl;
	std::cout << first.getName() << " : hp = " << first.getHP() << ",\t damage = "
	<< first.getDamage() << ",\t energy = " << first.getEnergy() << "\n";
	std::cout << second.getName() << " : hp = " << second.getHP() << ",\t damage = "
			  << second.getDamage() << ",\t energy = " << second.getEnergy() << "\n";
	std::cout << third.getName() << " : hp = " << third.getHP() << ",\t damage = "
			  << third.getDamage() << ",\t energy = " << third.getEnergy() << "\n";
	for (int i = 0; i < 3; i++)
		first.attack("wolf");
	std::cout << "\n";
	for (int i = 0; i < 3; i++)
		second.beRepaired(5);
	std::cout << "\n";
	for (int i = 0; i < 3; i++)
		third.takeDamage(8);

	return (0);
}
