#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(const std::string &name) : ScavTrap(name), FragTrap(name) {
    std::cout << "DiamondTrap " << this << " is initializing...\n";
    _name = name;

    ClapTrap::setName(name + "_clap_name");
    _hitPoints =  100; //FragTrap::getHP(); //100
    _energyPoints = 50; //ScavTrap::getEnergy(); //50
    _attackDamage = 30; //FragTrap::getDamage(); //30
}

void DiamondTrap::attack(const std::string &target) {
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI() {
	std::cout << "ClapTrap: "
			<< ClapTrap::getName() << std::endl
			<< "DiamondTrap: "<< _name << std::endl;
}

std::string DiamondTrap::getName() { return _name; }

DiamondTrap::~DiamondTrap() {
    std::cout << "DiamondTrap's " << this << " destructor was called\n";
}
