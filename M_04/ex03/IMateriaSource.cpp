#include "IMateriaSource.hpp"

MateriaSource::MateriaSource()
{
	std::cout << this << " MaSour's constructor was called\n";
	int i = 0;
	while (i < MAX_M)
		_type[i++] = NULL;
}

MateriaSource::MateriaSource(MateriaSource &other)
{
	std::cout << this << " MaSour's Copy constructor was called\n";
	for ( int i = 0; i < MAX_M; i++)
		_type[i] = other._type[i];
}

MateriaSource &MateriaSource::operator=(const MateriaSource &rhs)
{
	std::cout << this << " MaSour's Assignment was called\n";
	for ( int i = 0; i < MAX_M; i++)
	{
		delete _type[i];
		_type[i] = rhs._type[i]->clone();
	}
	return *this;
}

void MateriaSource::learnMateria(AMateria *type)
{
	int	i = 0;
	while (_type[i] && i < MAX_M)
		i++;
	if (i < MAX_M)
		_type[i] = type;
}

AMateria *MateriaSource::createMateria(const std::string &type)
{
	int	i = 0;
	while (_type[i]->getType() != type && i < MAX_M)
		i++;
	if (i < MAX_M)
		return _type[i]->clone();
	return NULL;
}

MateriaSource::~MateriaSource()
{
	std::cout << this << " MaSour's destructor was called\n";
	for (int i = 0; i < MAX_M; i++)
		delete _type[i];
}
