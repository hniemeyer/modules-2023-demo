module;
#include <iostream>

// first thing after the Global module fragment must be a module command
export module foo;

export void say_hello()
{
	std::cout << "Hello World\n";
}

export int foo_calculation(const int a, const int b)
{
	return a + b;
}