#include "Span.hpp"

Span::Span(unsigned int size) : _size(size) {
	std::cout << this << " span was created\n";
}

Span::Span(const Span &other) {
	*this = other;
}

Span &Span::operator=(const Span &rhs) {
	_size = rhs._size;
	_vtr = rhs._vtr;
	return *this;
}

Span::~Span() {
	std::cout << this << " span was destroyed\n";
}

void Span::addNumber(int numb) {
	if (_vtr.size() < _size)
		_vtr.push_back(numb);
	else
		throw NoPlaceException();
	std::sort(_vtr.begin(), _vtr.end());
}

void Span::addNumber(std::vector<int>::iterator first, std::vector<int>::iterator last) {
	if ((_vtr.size() + static_cast<unsigned int>(last - first)) < _size)
		_vtr.insert(_vtr.end(), first, last);
	else
		throw NoPlaceException();
	std::sort(_vtr.begin(), _vtr.end());
}

int Span::shortestSpan() const {
	if (_vtr.size() > 1)
	{
		int shortSpan = longestSpan();
		std::vector<int>::const_iterator it1 = _vtr.begin();
		std::vector<int>::const_iterator it2;
		for (; it1 < _vtr.end(); it1++) {
			for (it2 = it1 + 1; it2 < _vtr.end(); it2++) {
				if (abs(*it2 - *it1) < shortSpan)
					shortSpan = abs(*it2 - *it1);
			}
		}
		return shortSpan;
	} else
		throw NoSpanException();
}

int Span::longestSpan() const {
	if (_vtr.size() > 1)
		return (*(_vtr.end() - 1) - *_vtr.begin());
	else
		throw NoSpanException();
}
