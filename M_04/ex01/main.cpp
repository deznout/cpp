#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* j = new Dog();
	std::cout << std::endl;
	const Animal* i = new Cat();
	std::cout << std::endl;
	delete j;//should not create a leak
	std::cout << std::endl;
	delete i;
	std::cout << std::endl;

	Animal *arr[10];
	for ( int k = 0; k < 5; ++k )
	{
		arr[k] = new Dog();
		std::cout << k << std::endl;
	}
	for ( int k = 5; k < 10; ++k )
	{
		arr[k] = new Cat();
		std::cout << k << std::endl;
	}
	for ( int k = 9; k >= 0; --k )
	{
		delete arr[k];
		std::cout << k << std::endl;
	}

	std::cout << std::endl;
	Dog bas;
	std::cout << std::endl;
	{
		Dog tmp = bas;
	}
	std::cout << std::endl;
	return 0;
}
