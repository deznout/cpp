#include "Zombie.hpp"

int main(void)
{
	Zombie first("Franky");
	first.announce();

	Zombie *second = newZombie("Adelle");
	second->announce();

	randomChump("Teresa");
	delete second;

    return (0);
}
