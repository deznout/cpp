#ifndef M_05_FORM_HPP
#define M_05_FORM_HPP

# include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
private:
	const std::string	_name;
	const int			_gradeSign;
	const int			_executeGrade;
	bool				_isSigned;
public:
	Form(const std::string& name,
		 int gradeSign,
		 int execGrade);
	Form(const Form &other);
	Form& operator=(const Form &rhs);
	virtual ~Form();

	std::string	getName() const { return _name; };
	int	getGradeSign() const { return _gradeSign; };
	int	getExecGrade() const { return _executeGrade; };
	bool	getSigned() const { return _isSigned; };

	void beSigned(Bureaucrat &brcrt);
	virtual void	execute(Bureaucrat const & executor) const = 0;

	class GradeTooHighException: public std::exception
	{
		const char* what() const throw() { return "Form's grade is too high! "; }
	};

	class GradeTooLowException: public std::exception
	{
		const char* what() const throw() { return "Form's grade is too low! "; }
	};
};

std::ostream& operator<<(std::ostream &out, Form const& i);

#endif //M_05_FORM_HPP
