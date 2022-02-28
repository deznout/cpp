#ifndef M_05_BUREAUCRAT_HPP
#define M_05_BUREAUCRAT_HPP

# include <iostream>

class Bureaucrat {

private:
	std::string	_name;
	int			_grade;

public:
	Bureaucrat(const std::string& name, int grade);
	Bureaucrat(const Bureaucrat &other);
	Bureaucrat&	operator=(const Bureaucrat &rhs);
	~Bureaucrat();

	std::string	getName() const { return _name; };
	int	getGrade() const { return _grade; };

	class GradeTooHighException: public std::exception
	{
		const char* what() const throw() { return "Grade is too high! "; }
	};

	class GradeTooLowException: public std::exception
	{
		const char* what() const throw() { return "Grade is too low! "; }
	};

	void	increaseGrade();
	void	reduceGrade();
};

std::ostream& operator<<(std::ostream &out, Bureaucrat const &i);

#endif //M_05_BUREAUCRAT_HPP
