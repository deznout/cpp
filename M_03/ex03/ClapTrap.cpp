#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {
	std::cout << "ClapTrap's " << this << " default constructor was called\n";
}

ClapTrap::ClapTrap(const std::string& name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
	std::cout << "ClapTrap " << this << " is initializing...\n";
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
	std::cout << "ClapTrap's " << this << " copy constructor was called\n";
	*this = other;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &rhs)
{
	std::cout << "Assignation operator called\n";
	this->_attackDamage = rhs._attackDamage;
	this->_hitPoints = rhs._hitPoints;
	this->_name = rhs._name;
	this->_energyPoints = rhs._energyPoints;
	return (*this);
}

void ClapTrap::attack(const std::string &target)
{
	if (_energyPoints > 0 && _hitPoints > 0)
	{
		std::cout << "ClapTrap " << this->_name << " attacks " << target <<
		", causing " << this->_attackDamage << " points of damage!\n";
		--_energyPoints;
	}
	else if (_hitPoints == 0)
		std::cout << "ClapTrap " << this->_name << " is dead(\n";
	else
		std::cout << _name << " doesn't have enough energy(\n";
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (_energyPoints > 0 && _hitPoints > 0)
	{
		std::cout << "ClapTrap " << this->_name << " took " << amount << " damage!\n";
		--_energyPoints;
		if (amount > _hitPoints)
			_hitPoints = 0;
		else
			this->_hitPoints -= amount;
	}
	else if (_hitPoints == 0)
		std::cout << "ClapTrap " << this->_name << " is dead(\n";
	else
		std::cout << _name << " doesn't have enough energy(\n";
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energyPoints > 0 && _hitPoints > 0)
	{
		std::cout << "ClapTrap " << this->_name << " repairs itself for " << amount << "!\n";
		--_energyPoints;
		this->_hitPoints += amount;
	}
	else if (_hitPoints == 0)
		std::cout << "ClapTrap " << this->_name << " is dead(\n";
	else
		std::cout << _name << " doesn't have enough energy(\n";
}

//getters

std::string ClapTrap::getName() { return _name; }

unsigned int ClapTrap::getHP() const { return _hitPoints; }

unsigned int ClapTrap::getEnergy() const { return _energyPoints; }

unsigned int ClapTrap::getDamage() const { return _attackDamage; }

//setters

void ClapTrap::setName(const std::string &name) { _name = name; }

void ClapTrap::setHP(unsigned int hp) { _hitPoints = hp; }

void ClapTrap::setEnergy(unsigned int energy) { _energyPoints = energy; }

void ClapTrap::setDamage(unsigned int damage) { _attackDamage = damage; }

ClapTrap::~ClapTrap() {
    std::cout << "ClapTrap's " << this << " destructor was called\n";
}
