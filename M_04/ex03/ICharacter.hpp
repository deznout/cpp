#ifndef M_04_ICHARACTER_HPP
#define M_04_ICHARACTER_HPP

# include <iostream>
# include "AMateria.hpp"

# define MAX_M 4

class AMateria;

class ICharacter
{
public:
	virtual ~ICharacter() {}
	virtual std::string const & getName() const = 0;
	virtual void equip(AMateria* m) = 0;
	virtual void unequip(int idx) = 0;
	virtual void use(int idx, ICharacter& target) = 0;
};

class Character : public ICharacter
{
private:
	std::string	_name;
	AMateria	*_m[MAX_M];

public:
	Character(std::string const &name);
	Character(Character &other);
	Character &operator=(const Character &rhs);
	
	std::string const & getName() const;
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);

	~Character();
};

#endif //M_04_ICHARACTER_HPP
