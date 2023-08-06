module;
#include <iostream>
#include <string_view>

export module foo:io;

export void say_hello()
{
	std::cout << "Hello World\n";
}

export void say_name(const std::string_view name)
{
	std::cout << "Hello " << name << " \n";
}