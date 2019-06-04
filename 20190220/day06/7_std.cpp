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
	std::cout << "jack and rose ...\n";
	A::test();

	return 0;
}
