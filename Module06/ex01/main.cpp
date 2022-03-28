#include <iostream>
#include "convert.hpp"

uintptr_t	serialize(Data* ptr) { return (reinterpret_cast<uintptr_t>(ptr)); }

Data		*deserialize(uintptr_t raw) { return (reinterpret_cast<Data *>(raw)); }

int			main( void ) {
	uintptr_t	raw;
	Data		data;
	Data		*ret;

	data.num = 42;

	std::cout << "\nFirst impression " << &data << "\n\n";

	raw = serialize(&data);
	std::cout << "Serialized data: " << raw << "\n\n";

	ret = deserialize(raw);
	std::cout << "Deserialization of data: " << ret << "\n\n";
	
	return (0);
}
