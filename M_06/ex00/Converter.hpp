#ifndef M_06_CONVERTER_HPP
#define M_06_CONVERTER_HPP

# include <iostream>

class Converter {
private:
	char	*_str;
	char	_chr;
	long	_int;
	float	_fl;
	double	_double;

	void	getInfo(char *str);

public:
	explicit Converter(char *str);
	Converter(const Converter &other);
	Converter&	operator=(const Converter &rhs);
	~Converter();

	void	getChar(char *str);
	void	getInt(char *str);
	void	getFloat(char *str);
	void	getDouble(char *str);
};


#endif //M_06_CONVERTER_HPP
