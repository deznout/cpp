#include "Form.hpp"

Form::Form(const std::string &name, int gradeSign, int execGrade) :
	_name(name),
	_gradeSign(gradeSign),
	_executeGrade(execGrade) {
	std::cout << " Form's constructor was called \n";
	_isSigned = false;
	if (_executeGrade < 1 || _gradeSign < 1)
		throw Form::GradeTooHighException();
	if (_executeGrade > 150 || _gradeSign > 150)
		throw Form::GradeTooLowException();
}

Form::Form(const Form &other) :
	_name(other._name),
	_gradeSign(other._gradeSign),
	_executeGrade(other._executeGrade),
	_isSigned(other._isSigned) {
}

Form &Form::operator=(const Form &rhs) {
	if (this == &rhs)
		return *this;
	const_cast<std::string&>(_name) = rhs.getName();
	const_cast<bool&>(_isSigned) = rhs.getSigned();
	const_cast<int&>(_executeGrade) = rhs.getExecGrade();
	const_cast<int&>(_gradeSign) = rhs.getGradeSign();
	return *this;
}

Form::~Form() {
	std::cout << " Form's destructor was called \n";
}

void Form::beSigned(Bureaucrat &brcrt) {
	if (this->getSigned()) {
		return;
	}
	if (brcrt.getGrade() <= this->_gradeSign) {
		this->_isSigned = true;
		std::cout << brcrt.getName() << " signs " << this->_name << "\n";
	}
	else {
		throw GradeTooLowException();
	}
}

std::ostream& operator<<(std::ostream& out, Form const& i)
{
	return out << "Form: " + i.getName()
		<< (i.getSigned() ? ", signed" : ", not signed") << "\n"
		<< "Grade required to sign: " << i.getGradeSign() << "\n"
		<< "Grade required to execute: " << i.getExecGrade();
}
