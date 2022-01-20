#include "Weapon.hpp"

Weapon::Weapon() {}

Weapon::Weapon(std::string name)
{
	type = name;
}

std::string	Weapon::getType() const
{
	return (type);
}

void Weapon::setType(std::string name)
{
	this->type = name;
}
