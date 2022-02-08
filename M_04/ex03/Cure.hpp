#ifndef M_04_CURE_HPP
#define M_04_CURE_HPP

# include "AMateria.hpp"

class Cure : public AMateria
{
public:
	Cure();
	explicit Cure(std::string const & type);
	Cure(Cure &other);
	Cure &operator=(const Cure &rhs);

	AMateria* clone() const;
	void use(ICharacter& target);

	~Cure();
};


#endif //M_04_CURE_HPP
