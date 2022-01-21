#include "HumanA.hpp"

HumanA::HumanA(const std::string &name, Weapon &type): weapon(type)
{
	this->name = name;
}

void HumanA::attack()
{
	std::cout << this->name << " attacks with his " << this->weapon.getType() << std::endl;
}
