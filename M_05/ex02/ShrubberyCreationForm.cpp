#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) :
		Form("ShrubberyCreationForm", 145, 137), _target(target) {
	std::cout << END << " ShrubberyCreationForm was created \n";
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other) :
		Form(other.getName(), other.getGradeSign(), other.getExecGrade()) {
	this->_target = other._target;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &rhs) {
	this->_target = rhs._target;
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
	std::cout << END << " ShrubberyCreationForm was destroyed \n";
}

void ShrubberyCreationForm::execute(const Bureaucrat &executor) const {
	std::ofstream	fout;
	std::string		filename;
	std::string		buf;

	if (executor.getGrade() <= this->getExecGrade() &&
		this->getSigned()) {
		buf = "¯\\_(ツ)_/¯";
		filename = this->_target + "_shrubbery";
		fout.open(filename);
		fout << buf;
		fout.close();
	} else if (!this->getSigned()) {
		throw ("The form didn't sign!");
	} else
		throw Bureaucrat::GradeTooLowException();
}
