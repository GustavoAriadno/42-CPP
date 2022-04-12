#include "Span.hpp"
#include <cstdlib>

Span::Span( void ) {}

Span::Span( unsigned int N ) : max_nums(N) {}

Span::~Span( void ) {}

Span::Span( Span const &src ) { *this = src; }

Span	&Span::operator=( Span const &rhs ) {
	this->numbers = rhs.numbers;
	this->max_nums = rhs.max_nums;
	return (*this);
}

std::vector<int>	&Span::getNumbers( void ) { return this->numbers; }

const char	*Span::MaxElementsStoredException::what() const throw() { return "Max elements are already stored!"; }
const char	*Span::NotEnoughNumbersException::what() const throw() { return "Not enough numbers!"; }

void	Span::addNumber( int n ) {
	if (this->numbers.size() == max_nums) throw Span::MaxElementsStoredException();
	this->numbers.push_back(n);
}

void	Span::addNumber( std::vector<int>::iterator begin, std::vector<int>::iterator end ) {
	unsigned int len = 0;

	for ( std::vector<int>::iterator tmp = begin; tmp != end; ++tmp )
		len++;

	if (this->numbers.size() + --len >= max_nums) throw Span::MaxElementsStoredException();

	this->numbers.insert( this->numbers.end(), begin, end );
}

int		Span::shortestSpan( void ) {
	if (this->numbers.size() < 2) throw Span::NotEnoughNumbersException();

	std::sort( this->numbers.begin(), this->numbers.end() );

	std::vector<int>::iterator	it = this->numbers.begin();
	int							result = std::abs(*it - *(it + 1));

	for (; it != this->numbers.end(); it++)
		if ( (it + 1) != this->numbers.end() && std::abs(*it - *(it + 1)) < result )
			result = std::abs( *it - *(it + 1) );

	return (result);
}

int		Span::longestSpan( void ) {
	if (this->numbers.size() < 2) throw Span::NotEnoughNumbersException();

	std::sort( this->numbers.begin(), this->numbers.end() );
	
	return ( std::abs( *(this->numbers.begin()) - *(this->numbers.end() - 1) ) );
}

std::ostream	&operator<<( std::ostream &stream, Span &rhs ) {
	std::vector<int>::iterator
		bgn = rhs.getNumbers().begin(),
		end = rhs.getNumbers().end();

	stream << "[ ";
	for (; bgn != end; bgn++) stream << *bgn << ", ";
	stream << "] " << std::endl;

	return stream;
}
