#include "libhello.hpp"

#include <iostream>

#ifdef _WIN32
#define DLLEXPORT __declspec(dllexport)
#else
#define DLLEXPORT
#endif

DLLEXPORT void print_hello() { std::cout << "hello world from cpp toolchain" << std::endl; }