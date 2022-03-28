#ifndef CONVERT_HPP
#define CONVERT_HPP

#include <stdint.h>

typedef struct	s_data { int num; } Data;

uintptr_t		serialize(Data* ptr);
Data			*deserialize(uintptr_t raw);

#endif