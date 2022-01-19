#include "Zombie.hpp"

int main(void)
{
	int N = 8;
	Zombie *horde = zombieHorde(N, "Zombak");
	for (int i = 0; i < N; i++)
		horde[i].announce();

	delete[] horde;
    return (0);
}
