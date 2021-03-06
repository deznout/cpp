#ifndef CPP_CLAPTRAP_HPP
#define CPP_CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{
private:
	std::string		_name;
	unsigned int	_hitPoints;
	unsigned int	_energyPoints;
	unsigned int	_atakDamage;

	ClapTrap();

public:
	explicit ClapTrap(const std::string& name);
	ClapTrap(const ClapTrap &other);
	ClapTrap& operator=(const ClapTrap &rhs);

	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	//getters
	std::string		getName() const;
	unsigned int	getHP() const;
	unsigned int	getEnergy() const;
	unsigned int	getDamage() const;

	~ClapTrap();
};


#endif //CPP_CLAPTRAP_HPP
