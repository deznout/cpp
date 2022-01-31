#ifndef CPP_CLAPTRAP_HPP
#define CPP_CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{
private:
	std::string	_name;
	unsigned int	_hitPoints;
	unsigned int	_energyPoints;
	unsigned int	_atakDamage;

protected:
	ClapTrap();

public:
	explicit ClapTrap(const std::string& name);
	ClapTrap(const ClapTrap &other);
	ClapTrap& operator=(const ClapTrap &rhs);

	//getters
	virtual std::string	getName();

	virtual unsigned int	getHP() const;

	virtual unsigned int	getEnergy() const;

	virtual unsigned int	getDamage() const;

	//setters
	void setName(const std::string& name);
	void	setHP(unsigned int hp);
	void	setEnergy(unsigned int energy);
	void 	setDamage(unsigned int damage);

	virtual void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	~ClapTrap();
};


#endif //CPP_CLAPTRAP_HPP
