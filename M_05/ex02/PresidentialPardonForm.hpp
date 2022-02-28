#ifndef M_05_PRESIDENTIALPARDONFORM_HPP
#define M_05_PRESIDENTIALPARDONFORM_HPP

# include "Form.hpp"

class PresidentialPardonForm : public Form {
private:
	std::string	_target;
public:
	explicit PresidentialPardonForm(const std::string& target);
	PresidentialPardonForm(const PresidentialPardonForm &other);
	PresidentialPardonForm& operator=(const PresidentialPardonForm &rhs);
	~PresidentialPardonForm();

	void	execute(Bureaucrat const & executor) const;
};


#endif //M_05_PRESIDENTIALPARDONFORM_HPP
