#ifndef M_01_HUMANB_HPP
#define M_01_HUMANB_HPP

# include "Weapon.hpp"

class HumanB {
	private:
		std::string name;
		Weapon weapon;
	public:
		void attack();
};

#endif //M_01_HUMANB_HPP