#ifndef M_03_SCAVTRAP_HPP
#define M_03_SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap {
private:
    std::string _name;

public:
	explicit ScavTrap(const std::string& name);
	ScavTrap(const ScavTrap &other);

	void attack(const std::string& target);
	void	guardGate();

	~ScavTrap();
};

#endif //M_03_SCAVTRAP_HPP
