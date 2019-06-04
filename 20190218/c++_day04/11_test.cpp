#include <iostream>
using namespace std;

class A
{};

class B: public A
{};

class C: private B
{};

class D : public C
{};

int main(void)
{
	//C *c = new D;
//	B *b = new D;
	A *a = new D;

	return 0;
}
