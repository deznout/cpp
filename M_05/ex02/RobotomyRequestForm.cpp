#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string &target) :
		Form("RobotomyRequestForm", 72, 45), _target(target) {
	std::cout << END << " RobotomyRequestForm was created \n";
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other) :
		Form(other.getName(), other.getGradeSign(), other.getExecGrade()) {
	this->_target = other._target;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &rhs) {
	this->_target = rhs._target;
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm() {
	std::cout << END << " RobotomyRequestForm was destroyed \n";
}

void RobotomyRequestForm::execute(const Bureaucrat &executor) const {
	if (executor.getGrade() <= this->getExecGrade() &&
		this->getSigned()) {
		srand(time(0));
		std::cout << END << "Bzzz.... chreck! ... bzzz\n";
		if (rand() % 2 == 0)
			std::cout << this->_target << GREEN << " has been executed successfully\n" << END;
		else
			std::cout <<  this->_target << RED << " execution was failed\n" << END;
	} else if (!this->getSigned()) {
		throw ("The form didn't sign!");
	} else
		throw Bureaucrat::GradeTooLowException();
}
