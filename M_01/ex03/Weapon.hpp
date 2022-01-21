#ifndef M_01_WEAPON_HPP
#define M_01_WEAPON_HPP

# include <iostream>
# include <string>

class Weapon {
	private:
		std::string type;

	public:
		Weapon();
		Weapon(const std::string &name);
		std::string	getType() const;
		void setType(const std::string &name);
};

#endif //M_01_WEAPON_HPP