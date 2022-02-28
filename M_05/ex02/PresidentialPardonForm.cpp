#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string &target) :
Form("Zafod Beeblebrox", 25, 5), _target(target) {
std::cout << END << " PresidentialPardonForm was created \n";
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other) :
		Form(other.getName(), other.getGradeSign(), other.getExecGrade()) {
	this->_target = other._target;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &rhs) {
	this->_target = rhs._target;
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm() {
	std::cout << END << " PresidentialPardonForm was destroyed \n";
}

void PresidentialPardonForm::execute(const Bureaucrat &executor) const {
	if (executor.getGrade() <= this->getExecGrade() &&
		this->getSigned()) {
		std::cout << this->_target << GREEN << " has been pardoned by Zafod Beeblebrox." << END << std::endl;
	} else if (!this->getSigned()) {
		throw ("The form isn't sign!");
	} else
		throw Bureaucrat::GradeTooLowException();
}
