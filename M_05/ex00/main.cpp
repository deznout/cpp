#include "Bureaucrat.hpp"

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

	try
	{
		Bureaucrat c("Petrovich", 151);
	}
	catch (std::exception &ex)
	{
		std::cout << ex.what() << std::endl;
	}
	return 0;
}
