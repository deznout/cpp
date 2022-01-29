#ifndef CPP_CLAPTRAP_HPP
#define CPP_CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{
protected:
	std::string	_name;
	unsigned int	_hitPoints;
	unsigned int	_energyPoints;
	unsigned int	_atakDamage;

	ClapTrap();

public:
	explicit ClapTrap(const std::string& name);
	ClapTrap(const ClapTrap &other);
	ClapTrap& operator=(const ClapTrap &rhs);

	virtual void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	~ClapTrap();
};


#endif //CPP_CLAPTRAP_HPP
