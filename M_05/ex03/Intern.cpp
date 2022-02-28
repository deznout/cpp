#include "Intern.hpp"

Intern::Intern() {
	std::cout << GREEN << " Intern constructor called " << END << std::endl;
	this->_formName[0] = "Shrubberry form";
	this->_formName[1] = "Robotomy form";
	this->_formName[2] = "Presidential form";

	this->_getFormFunc[0] = &Intern::_newShrubberry;
	this->_getFormFunc[1] = &Intern::_newRobotomy;
	this->_getFormFunc[2] = &Intern::_newPresidential;
}

Intern::Intern(const Intern &other) {
	*this = other;
}

Intern &Intern::operator=(const Intern &rhs) {
	if (this == &rhs)
		return *this;
	return *this;
}

Intern::~Intern() {
	std::cout << RED << " Intern constructor called " << END << std::endl;
}

Form *Intern::_newShrubberry(std::string formTarget) {
	return new ShrubberyCreationForm(formTarget);
}

Form *Intern::_newRobotomy(std::string formTarget) {
	return new RobotomyRequestForm(formTarget);
}

Form *Intern::_newPresidential(std::string formTarget) {
	return new PresidentialPardonForm(formTarget);
}

Form *Intern::makeForm(std::string formName, std::string formTarget) {
	for (int i = 0; i < 3; i++) {
		if (formName == this->_formName[i]) {
			std::cout << GREEN << "Intern creates " << formName << END << std::endl;
			return ((this->*_getFormFunc[i])(formTarget));
		}
	}
	std::cout << RED << "Intern can't create  " << formName << END << std::endl;
	throw FormNotFoundException();
}
