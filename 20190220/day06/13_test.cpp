#include <iostream>
using namespace std;

struct A
{
	void test(){cout << "Atest()...\n";}
};

struct B:public A
{
	void test(){cout << "bTest()...\n";}
};

struct C:public B
{};

int main(void)
{
	C c;
	c.test();

	return 0;
}
