#ifndef M_05_INTERN_HPP
#define M_05_INTERN_HPP

# include "PresidentialPardonForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"

class Intern {
private:
	std::string	_formName[3];
	Form	*(Intern::*_getFormFunc[3])(std::string formTarget);
	
	Form	*_newShrubberry(std::string formTarget);
	Form	*_newRobotomy(std::string formTarget);
	Form	*_newPresidential(std::string formTarget);

public:
	Intern();
	Intern(const Intern &other);
	Intern&	operator=(const Intern &rhs);
	~Intern();

	Form	*makeForm(std::string formName, std::string formTarget);

	class FormNotFoundException : public std::exception {
		const char *what() const throw() { return "✕ ✕ Form not found ✕ ✕"; };
	};

};


#endif //M_05_INTERN_HPP
