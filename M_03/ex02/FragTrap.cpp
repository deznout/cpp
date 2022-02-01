#include "FragTrap.hpp"

FragTrap::FragTrap(const std::string &name) {
	std::cout << "FragTrap " << this << " is initializing...\n";
	this->_name = name;
	this->_energyPoints = 100;
	this->_hitPoints = 100;
	this->_atakDamage = 30;
}

FragTrap::FragTrap(const FragTrap &other)  : ClapTrap(other) {
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
