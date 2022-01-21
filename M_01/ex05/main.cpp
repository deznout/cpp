#include "Karen.hpp"

int main()
{
	Karen Iren;

	std::string arr[] = {"warere", "error", "debug", "info", "ssss"};
	for (int i = 0; i < 5; i++)
		Iren.complain(arr[i]);
	return (0);
}
