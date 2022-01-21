#include "Weapon.hpp"

Weapon::Weapon() {}

Weapon::Weapon(const std::string &name)
{
	type = name;
}

std::string	Weapon::getType() const
{
	return (type);
}

void Weapon::setType(const std::string &name)
{
	type = name;
}
