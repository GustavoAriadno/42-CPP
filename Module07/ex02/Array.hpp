#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <exception>

template <class T>
class Array {
	public:
		Array( void ) : array(NULL), len(0) {}
		Array( unsigned int n ) : array(new T[n]), len(n) {}
		Array(const Array &src) : array(NULL) { *this = src; }
		~Array() { delete [] this->array; }
		Array &operator=(const Array &rhs) {
			if (this != &rhs) {
				delete [] this->array;

				this->array = new T[rhs.size()];
				this->len = rhs.size();

				unsigned int size = rhs.size();

				for (unsigned int i = 0; i < size; i++)
					this->array[i] = rhs[i];
			}
			return *this;
		}
		unsigned int size( void ) const { return this->len; }
		T &operator[]( unsigned int i ) const {
			if ( i >= this->size() ) throw Array::indexOutOfBoundsException();
			return this->array[i];
		}
	private:
		T	*array;
		unsigned int len;

		class indexOutOfBoundsException : public std::exception {
			virtual const char *what() const throw() {
				return "Index is out of bounds";
			}
		};
};

#endif
