#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T>
void	printT( T &v ) { std::cout << v << " "; }

template <typename T>
void	pow( T &v ) { v *= v; }

template <typename T>
void	upp( T &v ) { v = toupper(v); }

template <typename T>
void	iter( T *arr, unsigned int len, void (*f) (T &) ) {
	for ( unsigned int i = 0 ; i < len ; i++ ) {
		f(arr[i]);
	}
}

#endif
