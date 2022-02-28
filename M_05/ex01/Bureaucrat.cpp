#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string& name, int grade) : _name(name), _grade(grade) {
	if (_grade > 150)
		throw Bureaucrat::GradeTooLowException();
	if (_grade < 1)
		throw Bureaucrat::GradeTooHighException();
	std::cout << "Was created a " << *this << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &other) {
	*this = other;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &rhs) {
	this->_grade = rhs.getGrade();
	this->_name = rhs.getName();
	return *this;
}

Bureaucrat::~Bureaucrat() {
	_grade = 0;
}

void Bureaucrat::increaseGrade() {
	if (_grade == 1)
		throw Bureaucrat::GradeTooHighException();
	_grade--;
}

void Bureaucrat::reduceGrade() {
	if (_grade == 150)
		throw Bureaucrat::GradeTooLowException();
	_grade++;
}

void	Bureaucrat::signForm(Form &form) {
	if (form.getSigned()) {
		std::cout << this->_name << " can't sign " << form.getName() <<
			 " because this form's been already signed.\n";
		return ;
	}
	try {
		form.beSigned(*this);
	}
	catch (std::exception &ex) {
		std::cout << this->_name << " can't sign " << form.getName() <<
			 " because its grade is too low.\n";
	}
}

std::ostream& operator<<(std::ostream &out, Bureaucrat const &i)
{
	return out << "Bureaucrat: " << i.getName()
			   << " grade: " << i.getGrade();
}
