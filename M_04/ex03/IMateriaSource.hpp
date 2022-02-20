#ifndef M_04_IMATERIASOURCE_HPP
#define M_04_IMATERIASOURCE_HPP

# include "AMateria.hpp"

class IMateriaSource
{
public:
	virtual ~IMateriaSource() {}
	virtual void learnMateria(AMateria*) = 0;
	virtual AMateria* createMateria(std::string const & type) = 0;
};

class MateriaSource : public IMateriaSource
{
private:
	AMateria *_type[MAX_M];

public:
	MateriaSource();
	MateriaSource(MateriaSource &other);
	MateriaSource &operator=(const MateriaSource &rhs);

	void learnMateria(AMateria *type);
	AMateria* createMateria(std::string const & type);

	~MateriaSource();
};

#endif //M_04_IMATERIASOURCE_HPP
