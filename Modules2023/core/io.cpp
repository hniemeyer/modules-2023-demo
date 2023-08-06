module;
#include <iostream>

export module foo:io;

export void say_hello()
{
	std::cout << "Hello World\n";
}

