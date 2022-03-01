#include <iostream>

struct	Data {
	int		i;
	char	c;
	float	fl;
};

uintptr_t serialize(Data* ptr) {
	return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw) {
	return reinterpret_cast<Data*>(raw);
}

int main() {
	Data		*a = new Data();
	Data		*b;
	uintptr_t	raw;

	a->c = 'k';
	a->fl = 3.14f;
	a->i = 21;
	raw = serialize(a);

	std::cout << "a: " << a << std::endl;
	std::cout << "A:\ni = " << a->i << "\tf = " << a->fl << "\tc = " << a->c << std::endl;
	std::cout << "raw = " << raw << std::endl;
	std::cout << "raw's address: " << &raw << std::endl;

	b = deserialize(raw);
	std::cout << "b: " << b << std::endl;
	std::cout << "B:\ni = " << b->i << "\tf = " << b->fl << "\tc = " << b->c << std::endl;

	delete a;

	return 0;
}
