#ifndef M_05_ROBOTOMYREQUESTFORM_HPP
#define M_05_ROBOTOMYREQUESTFORM_HPP

# include "Form.hpp"

class RobotomyRequestForm : public Form {
private:
	std::string	_target;
public:
	explicit RobotomyRequestForm(const std::string& target);
	RobotomyRequestForm(const RobotomyRequestForm &other);
	RobotomyRequestForm& operator=(const RobotomyRequestForm &rhs);
	~RobotomyRequestForm();

	void	execute(Bureaucrat const & executor) const;
};


#endif //M_05_ROBOTOMYREQUESTFORM_HPP
