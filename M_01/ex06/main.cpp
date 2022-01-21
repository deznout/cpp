#include "Karen.hpp"

int main(int ac, char **ag)
{
	Karen Iren;
	if (ac == 2)
		Iren.complain(ag[1]);
	else
		std::cout << "Wrong arguments;(\n";
	return (0);
}
