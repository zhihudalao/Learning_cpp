#include <iostream>

namespace A
{
	void test()
	{
		std::cout << "A::test()...\n";
	}
}

int main(void)
{
	using namespace A;
	test();

	return 0;
}
