#include "Intern.hpp"

int	main() {
	Bureaucrat me("Wong", 20);

	Intern a;
	try
	{
		Form *f = a.makeForm("React", "Raw");

		std:: cout << *f << std::endl;
		me.signForm(*f);
		f->execute(me);
	}
	catch (const char *er)
	{
		std::cout << er << std::endl;
	}
	catch (std::exception &ex)
	{
		std::cout << ex.what() << std::endl;
	}

	return (0);
}