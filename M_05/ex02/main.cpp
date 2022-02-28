#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int	main() {
	Bureaucrat me("Petrovich", 135);
	ShrubberyCreationForm form_sh("home");
	std::cout << form_sh << std::endl;
	me.signForm(form_sh);
	std::cout << std::endl << form_sh << std::endl;
	try
	{
		form_sh.execute(me);
		me.executeForm(form_sh);
	}
	catch (const char * er)
	{
		std::cout << er << std::endl;
	}
	catch (std::exception & ex)
	{
		std::cout << ex.what() << std::endl;
	}

	std::cout << "-------------------------------------------" << std::endl;
	Bureaucrat me2("Nikolai", 40);
	RobotomyRequestForm form_rob("Rob");
	me2.signForm(form_rob);
	std::cout << std::endl << form_rob << std::endl;
	try
	{
		form_rob.execute(me2);
	}
	catch (const char * er)
	{
		std::cout << er << std::endl;
	}
	catch (std::exception & ex)
	{
		std::cout << ex.what() << std::endl;
	}

	std::cout << "------------------------------------------" << std::endl << std::endl;
	Bureaucrat me3("Semen", 30);
	PresidentialPardonForm form_pres("Obama");
	me3.signForm(form_pres);
	std::cout << std::endl << form_pres << std::endl;
	try
	{
		form_pres.execute(me3);
	}
	catch (const char * er)
	{
		std::cout << er << std::endl;
	}
	catch (std::exception & ex)
	{
		std::cout << ex.what() << std::endl;
	}

	std::cout << "------------------------------------------" << std::endl;
	Bureaucrat me4("Lenin", 1);
	PresidentialPardonForm form_pres2("Elvis");
	me4.signForm(form_pres2);
	me4.executeForm(form_pres2);

	return (0);
}
