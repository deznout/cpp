#ifndef M_04_DOG_HPP
#define M_04_DOG_HPP

# include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal {
private:
	Brain	*brain;

public:
	Dog();
	Dog(Dog &other);
	Dog &operator=(const Dog &rhs);
	void makeSound() const;

	~Dog();
};


#endif //M_04_DOG_HPP
