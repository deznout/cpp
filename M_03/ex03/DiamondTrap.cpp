#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(const std::string &name)
: ScavTrap(name), FragTrap(name) {
	std::cout << "DiamondTrap " << this << " is initializing...\n";
	_name = name;

	ClapTrap::setName(name + "_clap_name");
	setHP(FragTrap::_hitPoints);
	setEnergy(ScavTrap::_energyPoints);
	setDamage(FragTrap::_attackDamage);
}

void DiamondTrap::attack(const std::string &target) {
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI() {
	std::cout << "ClapTrap: "
			<< ClapTrap::getName() << std::endl
			<< "DiamondTrap: "<< _name << std::endl;
}

DiamondTrap::~DiamondTrap() {
	std::cout << "DiamondTrap's " << this << " destructor was called\n";
}
