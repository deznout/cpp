#ifndef M_04_WRONGCAT_HPP
#define M_04_WRONGCAT_HPP

# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
public:
	WrongCat();

	void	makeSound() const;

	~WrongCat();
};


#endif //M_04_WRONGCAT_HPP
