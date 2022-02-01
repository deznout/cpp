#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "DiamondTrap.hpp"

int	main()
{
	ClapTrap first("Clap");
	ScavTrap second("Scav");
	FragTrap third("Frag");
	DiamondTrap fourth("Almaz");

    std::cout << first.getName() << " : hp = " << first.getHP() << ",\tdamage = "
              << first.getDamage() << ",\tenergy = " << first.getEnergy() << "\n";
    std::cout << second.getName() << " : hp = " << second.getHP() << ",\tdamage = "
              << second.getDamage() << ",\tenergy = " << second.getEnergy() << "\n";
    std::cout << third.getName() << " : hp = " << third.getHP() << ",\tdamage = "
              << third.getDamage() << ",\tenergy = " << third.getEnergy() << "\n";
    std::cout << fourth.getName() << " : hp = " << fourth.getHP() << ",\tdamage = "
              << fourth.getDamage() << ",\tenergy = " << fourth.getEnergy() << "\n";
    first.attack("pig");
    std::cout << "\n";
    second.attack("snake");
    std::cout << "\n";
    third.attack("ape");
    std::cout << "\n";
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
	std::cout << "\n";
	fourth.whoAmI();
	std::cout << "\n";
	fourth.attack("rock");
    std::cout << "\n";

	return (0);
}
