#ifndef M_03_SCAVTRAP_HPP
#define M_03_SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
public:
	explicit ScavTrap(const std::string& name);
	ScavTrap(const ScavTrap &other);

	void attack(const std::string& target);
	void	guardGate();

	~ScavTrap();
};

#endif //M_03_SCAVTRAP_HPP
