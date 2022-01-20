#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon type)
{

}

void HumanA::attack()
{
	std::cout << this->name << "  attacks with his " << this->weapon.getType();
}

