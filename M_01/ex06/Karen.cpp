#include "Karen.hpp"

void Karen::debug()
{
	std::cout << "[DEBUG]:\nI love to get extra bacon!\n";
}

void Karen::info()
{
	std::cout << "[INFO]:\nAdding extra bacon cost more money!\n";
}

void Karen::warning()
{
	std::cout << "[WARNING]:\nI deserve to have some extra bacon for free!\n";
}

void Karen::error()
{
	std::cout << "[ERROR]:\nI want to speak to the manager now!\n";
}

Karen::action Karen::funcs[] = { &Karen::debug, &Karen::info, &Karen::warning, &Karen::error };

void Karen::complain(std::string level)
{
	std::string levels[] = { "DEBUG", "INFO", "WARNING", "ERROR" };

	int i = 0;
	while (i < 4 && levels[i] != level)
		i++;

	switch (i)
	{
		case 4:
			std::cerr << "[ Probably complaining about insignificant problems ]\n";
			break ;
		default:
			while (i < 4)
				(this->*funcs[i++])();
	}
}
