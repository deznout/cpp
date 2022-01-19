#include "Zombie.hpp"

Zombie::~Zombie()
{
	std::cout << this->name << " is dead\n";
}

Zombie::Zombie(std::string name)
{
	this->name = name;
}

void Zombie::announce()
{
	std::cout << name << " BraiiiiiiinnnzzzZ...\n";
}
