#include "iter.hpp"
#include <iostream>

template <typename T>
void	print(T obj) {
	std::cout << obj << std::endl;
}

int	main() {
	std::string	animals[4] = {"ape", "tiger", "eagle", "bear"};
	iter(animals, 4, print);
	std::cout << std::endl;

	char	chars[5] = {'2', 'a', '*', '+', 'T'};
	iter(chars, 5, print);

	return 0;
}
