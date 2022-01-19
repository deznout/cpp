#ifndef M_01_ZOMBIE_HPP
#define M_01_ZOMBIE_HPP

# include <string>
# include <iostream>

class Zombie {
	private:
		std::string	name;
	public:
		Zombie();
		Zombie(std::string name);
		~Zombie();
		void setName(std::string name);
		void announce();
};

Zombie* zombieHorde( int N, std::string name );

#endif //M_01_ZOMBIE_HPP