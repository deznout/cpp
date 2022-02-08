#ifndef M_04_AANIMAL_HPP
#define M_04_AANIMAL_HPP

# include <iostream>

class AAnimal {
protected:
	std::string type;

public:
	AAnimal();
	AAnimal(AAnimal &other);
	AAnimal &operator=(const AAnimal &rhs);

	std::string getType() const;
	void setType(const std::string& _type);

	virtual void makeSound() const = 0;

	virtual ~AAnimal();
};


#endif //M_04_AANIMAL_HPP
