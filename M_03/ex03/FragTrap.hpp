#ifndef M_03_FRAGTRAP_HPP
#define M_03_FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap {
public:
	explicit FragTrap(const std::string& name);
	FragTrap(const FragTrap &other);

	void highFivesGuys();

	~FragTrap();
};


#endif //M_03_FRAGTRAP_HPP
