#ifndef M_01_WEAPON_HPP
#define M_01_WEAPON_HPP

# include <iostream>
# include <string>

class Weapon {
	private:
		std::string type;

	public:
		Weapon();
		Weapon(std::string name);
		std::string	getType() const;
		void setType(std::string name);
};

#endif //M_01_WEAPON_HPP