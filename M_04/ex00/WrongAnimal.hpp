#ifndef M_04_WRONGANIMAL_HPP
#define M_04_WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal
{
protected:
	std::string	type;

public:
	WrongAnimal();
	explicit WrongAnimal(const std::string& name);
	WrongAnimal(WrongAnimal &other);
	WrongAnimal &operator=(const WrongAnimal &rhs);

	virtual void	makeSound() const;
	std::string		getType() const;

	~WrongAnimal();
};


#endif //M_04_WRONGANIMAL_HPP
