#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(const std::string &name)
: ScavTrap(name), FragTrap(name) {
	std::cout << "DiamondTrap " << this << " is initializing...\n";
	_name = name;

	setName(name + "_clap_name");
	_hitPoints = FragTrap::getHP();
	_energyPoints = ScavTrap::getEnergy();
	_atackDamage = FragTrap::getDamage();
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

std::string DiamondTrap::getName()
{
	return _name;
}

unsigned int DiamondTrap::getHP() const
{
	return _hitPoints;
}

unsigned int DiamondTrap::getEnergy() const
{
	return _energyPoints;
}

unsigned int DiamondTrap::getDamage() const
{
	return _atackDamage;
}
