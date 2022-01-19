#ifndef M_01_ZOMBIE_HPP
#define M_01_ZOMBIE_HPP

# include <string>
# include <iostream>

class Zombie {
	private:
		std::string	name;
	public:
		Zombie(std::string name);
		~Zombie();
		void announce();
};

Zombie* newZombie( std::string name );

void randomChump( std::string name );

#endif //M_01_ZOMBIE_HPP