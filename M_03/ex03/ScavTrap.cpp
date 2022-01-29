#include "ScavTrap.hpp"

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name) {
	std::cout << "ScavTrap " << this << " is initializing...\n";
	setEnergy(50);
	setHP(100);
	setDamage(20);
}

ScavTrap::ScavTrap(const ScavTrap &other) {
	std::cout << "ScavTrap's " << this << " copy constructor was called\n";
	*this = other;
}

void ScavTrap::attack(const std::string &target) {
	if (getEnergy() > 0 && getHP() > 0)
	{
		std::cout << "ScavTrap " << this->getName() << " attacks " << target <<
				  ", causing " << this->getDamage() << " points of damage!\n";
		setEnergy(getEnergy() - 1);
	}
	else if (getHP() == 0)
		std::cout << "SvavTrap " << this->getName() << " is dead(\n";
	else
		std::cout << getName() << " doesn't have enough energy(\n";
}

void ScavTrap::guardGate() {
	std::cout << "ScavTrap is now in Gatekeeper mode.\n";
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap's " << this << " destructor was called\n";
}
