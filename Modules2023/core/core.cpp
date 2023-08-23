// first thing after the Global module fragment must be a module command
export module core;

export import :io;

namespace core {
	export int calculation(const int a, const int b)
	{
		return a + b;
	}
}