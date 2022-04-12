#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <algorithm>

template <typename T>
typename T::iterator	easyFind(T &conteiner, int val) {
	typename T::iterator ret = std::find( conteiner.begin(), conteiner.end(), val );

	return ( ret != conteiner.end() ) ? ret : conteiner.end();
};

#endif
