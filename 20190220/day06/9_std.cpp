#include <iostream>

namespace A
{
	void test()
	{
		std::cout << "A::test()...\n";
	}
}
namespace B
{
	void test()
	{
		std::cout << "B::test()...\n";
	}
}

int main(void)
{
	using namespace A;
	test();

//	B::test();
//	using namespace B;
//	test();



	return 0;
}
