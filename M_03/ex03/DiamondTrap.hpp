#ifndef M_03_DIAMONDTRAP_HPP
#define M_03_DIAMONDTRAP_HPP

# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {
private:
	std::string _name;

public:
	explicit DiamondTrap(const std::string &name);
	void attack(const std::string &target);
	void whoAmI();

	~DiamondTrap();
};


#endif //M_03_DIAMONDTRAP_HPP
