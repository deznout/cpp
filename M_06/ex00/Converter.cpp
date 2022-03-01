#include "Converter.hpp"

Converter::Converter(char *str) : _str(str) {
	getInfo(str);
}

Converter::Converter(const Converter &other) {
	*this = other;
}

Converter &Converter::operator=(const Converter &rhs) {
	_str = rhs._str;
	return *this;
}

Converter::~Converter() {
}

void Converter::getInfo(char *str) {
	getChar(str);
	getInt(str);
	getFloat(str);
	getDouble(str);
}

void Converter::getChar(char *str) {
	try {
		_chr = static_cast<char>(std::stoi(str));
		if (!std::isprint(_chr))
			std::cout << "char: \tNon displayable\n";
		else
			std::cout << "char: \t'" << _chr << "'\n";
	} catch (std::exception &ex) {
		std::cout << "char:\timpossible!\n";
	}
}

void Converter::getInt(char *str) {
	try {
		_int = static_cast<int>(std::stoi(str));
			std::cout << "int: \t" << _int << "\n";
	} catch (std::exception &ex) {
		std::cout << "int:\timpossible!\n";
	}
}

void Converter::getFloat(char *str) {
	try {
		_fl = static_cast<float>(std::strtod(str, 0));
		std::cout << "float: \t" << std::fixed;
		std::cout.precision(1);
		std::cout << _fl << "f\n";
	} catch (std::exception &ex) {
		std::cout << "float:\timpossible!\n";
	}
}

void Converter::getDouble(char *str) {
	try {
		_double = static_cast<double>(std::strtod(str, 0));
		std::cout << "double:\t" << _double << "\n";
	} catch (std::exception &ex) {
		std::cout << "double:\timpossible!\n";
	}
}
