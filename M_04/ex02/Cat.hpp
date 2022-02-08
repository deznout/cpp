#ifndef M_04_CAT_HPP
#define M_04_CAT_HPP

# include "AAnimal.hpp"
# include "Brain.hpp"

class Cat : public AAnimal {
private:
	Brain	*brain;

public:
	Cat();
	Cat(Cat &other);
	Cat &operator=(const Cat &rhs);
	void makeSound() const;

	~Cat();
};


#endif //M_04_CAT_HPP
