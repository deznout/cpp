#ifndef M_01_KAREN_HPP
#define M_01_KAREN_HPP

#include <iostream>

class Karen {
private:
	void debug();
	void info();
	void warning();
	void error();
	typedef void(Karen::*action)();
	static action funcs[];
public:
	void complain( std::string level );
};

#endif //M_01_KAREN_HPP