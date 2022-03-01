#ifndef M_07_ARRAY_HPP
# define M_07_ARRAY_HPP

template<class T>
class Array {
private:
	T				*_data;
	unsigned int	_arr_size;
public:
	Array() : _arr_size() {}
	explicit Array(unsigned int n) : _arr_size(n) {
		_data = new T[n];
		for (unsigned int i = 0; i < n; ++i)
			_data[i] = 0;
	}

	Array(const Array<T> &other) {
		*this = other;
	}

	Array& operator=(const Array &rhs) {
		this->_arr_size = rhs._arr_size;
		this->_data = new T[this->_arr_size];
		for (unsigned int i = 0; i < _arr_size; ++i)
			this->_data[i] = rhs._data[i];
		return *this;
	}

	~Array() {
		delete[] this->_data;
	}

	T&	operator[](unsigned int id) {
		if (id < 0 || id >= _arr_size)
			throw std::out_of_range("Index is out of range");
		return _data[id];
	}
};

#endif //M_07_ARRAY_HPP
