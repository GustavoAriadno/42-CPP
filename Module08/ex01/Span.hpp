#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <algorithm>
#include <exception>
#include <iostream>

class Span {
	public:
		Span(unsigned int N);
		Span(Span const &src);
		~Span( void );
		Span &operator=(Span const &rhs);

		std::vector<int>	&getNumbers( void );

		void	addNumber( int n );
		void	addNumber( std::vector<int>::iterator begin, std::vector<int>::iterator end );
		int		shortestSpan( void );
		int		longestSpan( void );

	private:
		std::vector<int>	numbers;
		unsigned int		max_nums;
		Span( void );

		class MaxElementsStoredException : public std::exception
			{ virtual const char *what() const throw(); };
		class NotEnoughNumbersException : public std::exception
			{ virtual const char *what() const throw(); };

};

std::ostream	&operator<<( std::ostream &stream, Span &rhs );

#endif
