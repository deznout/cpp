#ifndef M_05_SHRUBBERYCREATIONFORM_HPP
#define M_05_SHRUBBERYCREATIONFORM_HPP

# include "Form.hpp"
# include <fstream>

class ShrubberyCreationForm : public Form {
private:
	std::string	_target;
public:
	explicit ShrubberyCreationForm(const std::string& target);
	ShrubberyCreationForm(const ShrubberyCreationForm &other);
	ShrubberyCreationForm& operator=(const ShrubberyCreationForm &rhs);
	~ShrubberyCreationForm();

	void	execute(Bureaucrat const & executor) const;
};


#endif //M_05_SHRUBBERYCREATIONFORM_HPP
