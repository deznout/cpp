#include "ICharacter.hpp"

Character::Character(const std::string &name) : _name(name)
{
	std::cout << this << " character's constructor was called\n";
	int i = 0;
	while (i < MAX_M)
		_m[i++] = NULL;
}

Character::Character(Character &other) : _name(other._name)
{
	std::cout << this << " character's Copy constructor was called\n";
	for ( int i = 0; i < MAX_M; i++ )
		_m[i] = other._m[i];
	// *this = other; // via overloaded operator=
}

Character &Character::operator=(const Character &rhs)
{
	std::cout << this << " character's Assignment was called\n";
	_name = rhs._name;
	for ( int i = 0; i < MAX_M; i++ )
		_m[i] = rhs._m[i];
	return *this;
}

std::string const &Character::getName() const { return _name; }

void Character::equip(AMateria *m)
{
	int i = 0;
	while (_m[i] != NULL && i < MAX_M)
		i++;
	if (i < MAX_M)
		_m[i] = m;
}

void Character::unequip(int idx)
{
	if (0 >= idx && idx < MAX_M)
		_m[idx] = NULL;
}

void Character::use(int idx, ICharacter &target)
{
	if (idx >= 0 && idx < MAX_M && _m[idx])
		_m[idx]->use(target);
}

Character::~Character()
{
	std::cout << this << " character's destructor was called\n";
	for ( int i = 0; i < MAX_M; i++)
		delete _m[i];
}
