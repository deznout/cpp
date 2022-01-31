#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "DiamondTrap.hpp"

int	main()
{
	ClapTrap first("Clap");
	ScavTrap second("Scav");
	FragTrap third("Frag");
	DiamondTrap fourth("Almaz");

	std::cout << fourth.getName() << " = " << fourth.getEnergy() << "\n";
	std::cout << second.getName() << " = " << second.getEnergy() << "\n";
	std::cout << fourth.getName() << " = " << fourth.getDamage() << "\n";
	std::cout << third.getName() << " = " << third.getDamage() << "\n";
	std::cout << fourth.getName() << " = " << fourth.getHP() << "\n";
	std::cout << third.getName() << " = " << third.getHP() << "\n";
//	for (int i = 0; i < 3; i++)
//		first.attack("wolf");
//	std::cout << "\n";
//	for (int i = 0; i < 3; i++)
//		second.attack("pig");
//	std::cout << "\n";
//	for (int i = 0; i < 3; i++)
//		third.takeDamage(20);
//	std::cout << "\n";
//	for (int i = 0; i < 3; i++)
//		third.attack("frog");
//	std::cout << "\n";
//	third.highFivesGuys();
	std::cout << "\n";
	fourth.whoAmI();
	std::cout << "\n";
	fourth.attack("rock");

	return (0);
}
