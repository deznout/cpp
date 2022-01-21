#ifndef M_01_HUMANA_HPP
#define M_01_HUMANA_HPP

# include "Weapon.hpp"

class HumanA {
	private:
		std::string name;
		Weapon &weapon;
	public:
		HumanA(const std::string &name, Weapon &type);
		void attack();
};

#endif //M_01_HUMANA_HPP