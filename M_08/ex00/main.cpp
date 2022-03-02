#include "easyfind.hpp"

int main() {
	std::vector<int> container;
	container.push_back(1);
	container.push_back(2);
	container.push_back(3);
	std::cout << "Searching index..." << std::endl;
	std::cout << "Index is: ";
	try {
		std::cout << *easyfind(container, 3) << std::endl;
	} catch(const char* e) {
		std::cerr << e << std::endl;
	}

	try {
		std::cout << *easyfind(container, 5) << std::endl;
	} catch(const char* e) {
		std::cerr << e << std::endl;
	}

	return (0);
}