import core;
import geometry;
#include <compare>

int main()
{
	core::io::say_hello();
	core::io::say_name("Hendrik");
	core::io::say_name("Welt");
	geometry::point my_point{ .x = 5.0, .y = 10.0 };
	core::io::print_point<double>(my_point);
}