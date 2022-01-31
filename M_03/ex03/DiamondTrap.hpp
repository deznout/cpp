#ifndef M_03_DIAMONDTRAP_HPP
#define M_03_DIAMONDTRAP_HPP

# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {
private:
	std::string _name;
	unsigned int	_hitPoints;
	unsigned int	_atackDamage;
	unsigned int	_energyPoints;

public:
	explicit DiamondTrap(const std::string &name);
	void attack(const std::string &target);
	void whoAmI();

	//getters
	std::string 	getName();
	unsigned int	getHP() const;
	unsigned int	getEnergy() const;
	unsigned int	getDamage() const;

	//setters
//	void setName(const std::string& name);
//	void	setHP(unsigned int hp);
//	void	setEnergy(unsigned int energy);
//	void 	setDamage(unsigned int damage);

	~DiamondTrap();
};


#endif //M_03_DIAMONDTRAP_HPP
