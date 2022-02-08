#ifndef M_04_AMATERIA_HPP
#define M_04_AMATERIA_HPP

# include "ICharacter.hpp"

class ICharacter;

class AMateria
{
protected:
	std::string	type;

public:
	AMateria(std::string const & type);
	AMateria(AMateria &other);
	AMateria &operator=(const AMateria &rhs);

	std::string const & getType() const; //Returns the materia type
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);

	virtual ~AMateria();
};


#endif //M_04_AMATERIA_HPP
