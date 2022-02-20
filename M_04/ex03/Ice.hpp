#ifndef M_04_ICE_HPP
#define M_04_ICE_HPP

# include "AMateria.hpp"

class Ice : public AMateria
{
public:
	Ice();
	explicit Ice(std::string const & type);
	Ice(Ice &other);
	Ice &operator=(const Ice &rhs);

	AMateria* clone() const;
	void use(ICharacter& target);

	~Ice();
};


#endif //M_04_ICE_HPP
