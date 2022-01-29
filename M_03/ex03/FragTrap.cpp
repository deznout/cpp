#include "FragTrap.hpp"

FragTrap::FragTrap(const std::string &name) : ClapTrap(name) {
	std::cout << "FragTrap " << this << " is initializing...\n";
	setEnergy(100);
	setHP(100);
	setDamage(30);
}

FragTrap::FragTrap(const FragTrap &other) {
	std::cout << "FragTrap's " << this << " copy constructor was called\n";
	*this = other;
}

void FragTrap::attack(const std::string &target) {
	ClapTrap::attack(target);
}

void FragTrap::highFivesGuys() {
	std::cout << "FragTrap requests a high fives.\n";
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap's " << this << " destructor was called\n";
}
