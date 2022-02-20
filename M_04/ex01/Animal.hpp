#ifndef M_04_ANIMAL_HPP
#define M_04_ANIMAL_HPP

# include <iostream>

class Animal {
protected:
	std::string type;

public:
	Animal();
	Animal(Animal &other);
	Animal &operator=(const Animal &rhs);

	std::string getType() const;
	void setType(const std::string& _type);

	virtual void makeSound() const;

	virtual ~Animal();
};


#endif //M_04_ANIMAL_HPP
