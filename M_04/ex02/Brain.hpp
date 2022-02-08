#ifndef M_04_BRAIN_HPP
#define M_04_BRAIN_HPP

# include <iostream>
# define NUM_IDEAS 100

class Brain {
private:
	std::string ideas[NUM_IDEAS];

public:
	Brain();
	Brain(Brain &other);
	Brain &operator=(const Brain &rhs);

	//std::string getIdea() const;
	//void setType(const std::string& _type);

	//virtual void makeSound() const;

	virtual ~Brain();
};


#endif //M_04_BRAIN_HPP
