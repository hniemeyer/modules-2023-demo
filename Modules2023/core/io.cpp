module;
#include <iostream>
#include <string_view>

export module core:io;

import geometry;

namespace core::io {
	export void say_hello()
	{
		std::cout << "Hello World\n";
	}

	export void say_name(const std::string_view name)
	{
		std::cout << "Hello " << name << " \n";
	}

	export void print_point(const geometry::point& p)
	{
		std::cout << "x = " << p.x << " y= " << p.y << " \n";
	}
}