#include <iostream>

class Base {
public:
	virtual ~Base() {};
};

class A : public Base {};
class B : public Base {};
class C : public Base {};

Base * generate(void) {
	srand(time(0));
	int i = rand() % 3;
	if (i == 0)
		return new A;
	else if (i == 1)
		return new B;
	else
		return new C;
}

void identify(Base* p) {
	if (dynamic_cast<A*>(p))
		std::cout << "A\n";
	else if (dynamic_cast<B*>(p))
		std::cout << "B\n";
	else if (dynamic_cast<C*>(p))
		std::cout << "C\n";
	else
		std::cout << "Something went wrong?\n";;
}

void identify(Base& p) {
	if (!(char *)&p)
		return ;
	try {
		(void)dynamic_cast<A&>(p);
		std::cout << "A\n";
	} catch (std::bad_cast) {}
	try {
		(void)dynamic_cast<B&>(p);
		std::cout << "B\n";
	} catch (std::bad_cast) {}
	try {
		(void)dynamic_cast<C&>(p);
		std::cout << "C\n";
	} catch (std::bad_cast) {}
}

int main() {
	Base	*a;

	std::cout << "pointer *p:\n";

	a = generate();
	identify(a);
	delete a;

	std::cout << "reference &p:\n";

	Base &b = *generate();
	identify(b);
	delete &b;

	return 0;
}
