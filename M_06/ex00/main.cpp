#include "Converter.hpp"

int main(int ac, char **ag) {
	if (ac != 2)
		std::cout << "Write correct number of arguments!\n";
	else {
		std::cout << "__________________________________\n\n";
		Converter	a(ag[1]);
		Converter	b(a);
		std::cout << "__________________________________\n";
	}

	return 0;
}
