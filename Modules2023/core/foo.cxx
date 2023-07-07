module;
#include <iostream>

// first thing after the Global module fragment must be a module command
export module foo;

export void say_hello()
{
	std::cout << "Hello World\n";
}