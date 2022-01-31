#ifndef M_03_FRAGTRAP_HPP
#define M_03_FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap {
private:
	unsigned int	_hitPoints;
	unsigned int	_atackDamage;
	unsigned int	_energyPoints;
public:
	explicit FragTrap(const std::string& name);
	FragTrap(const FragTrap &other);

	void attack(const std::string& target);
	void highFivesGuys();

	~FragTrap();
};


#endif //M_03_FRAGTRAP_HPP
