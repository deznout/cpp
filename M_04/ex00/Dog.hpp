#ifndef M_04_DOG_HPP
#define M_04_DOG_HPP

# include "Animal.hpp"

class Dog : public Animal {
public:
	Dog();
	Dog(Dog &other);
	Dog &operator=(const Dog &rhs);
	void makeSound() const;

	~Dog();
};


#endif //M_04_DOG_HPP
