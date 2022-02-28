#include "Form.hpp"

#define RED "\033[31m"
#define END "\033[0m"

int main() {
	try {
		Bureaucrat bureaucrat("Rooney", 1);
		bureaucrat.reduceGrade();
		std::cout << bureaucrat << std::endl;
		bureaucrat.increaseGrade();
		std::cout << bureaucrat << std::endl;
		bureaucrat.reduceGrade();
		std::cout << bureaucrat << std::endl;
	}
	catch (std::exception &e) {
		std::cerr
				<< RED << "Error: "
				<< e.what()
				<< END << std::endl;
	}
	std::cout << "-----------------------------\n";
	try
	{
		Bureaucrat b("German", 150);
		b.increaseGrade();
		std::cout << b << std::endl;
		b.reduceGrade();
		std::cout << b << std::endl;
		b.reduceGrade();
		std::cout << b << std::endl;
		b.reduceGrade();
		std::cout << b << std::endl;
	}
	catch (std::exception &ex)
	{
		std::cout << ex.what() << std::endl;
	}
	std::cout << "-----------------------------\n";

	//Bureaucrat c("Petrovich", 151);

	try
	{
		Form b("f1", 0, 15);
		Form c(b);
		std::cout << b << std::endl;
		std::cout << c << std::endl;
	}
	catch (std::exception & ex)
	{
		std::cout << ex.what() << std::endl;
	}

	std::cout << "-----------------------------\n";

	try
	{
		Form b("f1", 100, 151);
		std::cout << b << std::endl;
	}
	catch (std::exception & ex)
	{
		std::cout << ex.what() << std::endl;
	}

	std::cout << "-----------------------------\n";

	try
	{
		Form b("f1", 100, 151);
		std::cout << b << std::endl;
	}
	catch (std::exception & ex)
	{
		std::cout << ex.what() << std::endl;
	}

	std::cout << "-----------------------------\n";

	std::cout << std::endl;
	Form b("f1", 100, 15);
	std::cout << std::endl << b << std::endl;
	Bureaucrat b2("Milan", 10);
	b2.signForm(b);
	std::cout << std::endl << b << std::endl;

	std::cout << "-----------------------------\n";

	std::cout << std::endl;
	Form c("f2", 100, 15);
	Bureaucrat c2("Valeriy", 100);
	c2.signForm(c);
	std::cout << std::endl << c << std::endl;
	c2.signForm(c);
	std::cout << std::endl << c << std::endl;

	std::cout << "-----------------------------\n";

	std::cout << std::endl;
	Form e("f3", 100, 15);
	Bureaucrat e3("Baiden", 101);
	e3.signForm(e);
	std::cout << std::endl << e << std::endl;
	std::cout << e3 << std::endl;
	e3.increaseGrade();
	e3.signForm(e);

	return 0;
}
