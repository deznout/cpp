#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int	main()
{
	ClapTrap first("Clap");
	ScavTrap second("Scav");
	ScavTrap copy(second);
	FragTrap third("Frag");
	
	std::cout << first.getName() << " : hp = " << first.getHP() << ",\tdamage = "
			  << first.getDamage() << ",\tenergy = " << first.getEnergy() << "\n";
	std::cout << second.getName() << " : hp = " << second.getHP() << ",\tdamage = "
			  << second.getDamage() << ",\tenergy = " << second.getEnergy() << "\n";
	std::cout << third.getName() << " : hp = " << third.getHP() << ",\tdamage = "
			  << third.getDamage() << ",\tenergy = " << third.getEnergy() << "\n";
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

	std::cout << first.getName() << " : hp = " << first.getHP() << ",\tdamage = "
			  << first.getDamage() << ",\tenergy = " << first.getEnergy() << "\n";
	std::cout << second.getName() << " : hp = " << second.getHP() << ",\tdamage = "
			  << second.getDamage() << ",\tenergy = " << second.getEnergy() << "\n";
	std::cout << third.getName() << " : hp = " << third.getHP() << ",\tdamage = "
			  << third.getDamage() << ",\tenergy = " << third.getEnergy() << "\n";

	return (0);
}
