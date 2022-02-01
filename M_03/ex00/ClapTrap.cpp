#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {
	std::cout << "Default constructor of " << this <<" was called\n";
}

ClapTrap::ClapTrap(const std::string& name)
{
	std::cout << "Initializing...\n";
	this->_name = name;
	this->_energyPoints = 10;
	this->_hitPoints = 10;
	this->_atakDamage = 0;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
	std::cout << "Copy constructor was called\n";
	*this = other;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &rhs)
{
	std::cout << "Assignation operator called\n";
	this->_atakDamage = rhs._atakDamage;
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
		", causing " << this->_atakDamage << " points of damage!\n";
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

std::string	ClapTrap::getName() const { return _name; }

unsigned int	ClapTrap::getHP() const { return _hitPoints; }

unsigned int	ClapTrap::getEnergy() const { return _energyPoints; }

unsigned int	ClapTrap::getDamage() const { return _atakDamage; }

ClapTrap::~ClapTrap() {
	std::cout << "Destructor of " << this << " was called\n";
}
