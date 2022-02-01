#include "ScavTrap.hpp"

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name) {
	std::cout << "ScavTrap " << this << " is initializing...\n";
    this->_name = name;
	this->_energyPoints = 50;
	this->_hitPoints = 100;
	this->_attackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &other) {
	std::cout << "ScavTrap's " << this << " copy constructor was called\n";
	*this = other;
}

void ScavTrap::attack(const std::string &target) {
	if (_energyPoints > 0 && _hitPoints > 0)
	{
		std::cout << "ScavTrap " << this->_name << " attacks " << target <<
				  ", causing " << this->_attackDamage << " points of damage!\n";
		--_energyPoints;
	}
	else if (_hitPoints == 0)
		std::cout << "SvavTrap " << this->_name << " is dead(\n";
	else
		std::cout << _name << " doesn't have enough energy(\n";
}

void ScavTrap::guardGate() {
	std::cout << "ScavTrap is now in Gatekeeper mode.\n";
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap's " << this << " destructor was called\n";
}
