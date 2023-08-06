// first thing after the Global module fragment must be a module command
export module foo;

export import :io;

export int foo_calculation(const int a, const int b)
{
	return a + b;
}