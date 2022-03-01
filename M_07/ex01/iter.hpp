#ifndef M_07_ITER_HPP
# define M_07_ITER_HPP

# include <cstddef>
template <typename T>
void	iter(T *arr, size_t length, void (*func)(const T &tmp)) {
	for (size_t i = 0; i < length; i++)
		func(arr[i]);
}

#endif //M_07_ITER_HPP
