#include "Span.hpp"
#include <iostream>

int main()
{
	std::cout << "----first test----" << std::endl;

	Span sp = Span(5);

	try
	{
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	std::cout << "----second test----" << std::endl;

	Span cp = Span(3);

	try
	{
		cp.addNumber(1);
		cp.addNumber(5);
		cp.addNumber(11);
		cp.addNumber(19);
		cp.addNumber(2);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << cp.shortestSpan() << std::endl;
	std::cout << cp.longestSpan() << std::endl;

	std::cout << "----third test----" << std::endl;

	Span vp = Span(10000);

	try
	{
		for (int i = 1; i <= 10000; i++)
			vp.addNumber(i);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << vp.shortestSpan() << std::endl;
	std::cout << vp.longestSpan() << std::endl;

	std::cout << "----forth test----" << std::endl;

	Span bp = Span(3);

	try
	{
		bp.addNumber(1);
		bp.addNumber(5);
		bp.addNumber(11);
		bp.addNumber(19);
		bp.addNumber(2);
		bp.addNumber(14);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << bp.shortestSpan() << std::endl;
	std::cout << bp.longestSpan() << std::endl;

	std::cout << "----fifth test----" << std::endl;

	Span ap = Span(5);
	std::vector<int> vectr;
	vectr.push_back(4);
	vectr.push_back(2);
	vectr.push_back(5);

	try
	{
		ap.addNumber(vectr.begin(), vectr.end());
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << ap.shortestSpan() << std::endl;
	std::cout << ap.longestSpan() << std::endl;
}
