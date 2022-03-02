#ifndef M_08_SPAN_HPP
# define M_08_SPAN_HPP

# include <iostream>
# include <vector>
# include <algorithm>

class Span {
private:
	std::vector<int>	_vtr;
	unsigned int		_size;

public:
	explicit Span(unsigned int size);
	Span(const Span &other);
	Span& operator=(const Span &rhs);
	~Span();

	void	addNumber(int numb);
	void	addNumber(std::vector<int>::iterator first, std::vector<int>::iterator last);
	int	shortestSpan() const;
	int	longestSpan() const;

	class NoPlaceException : public std::exception {
	public:
		virtual const char *what() const throw() { return "No place left"; }
	};

	class NoSpanException : public std::exception {
	public:
		virtual const char *what() const throw() { return "No span found"; }
	};
};


#endif //M_08_SPAN_HPP
