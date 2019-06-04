#include <iostream>
using namespace std;

class A
{
public:
	A(){cout << "A()...\n";}
	int m_a;
};

//若虚继承基类，则派生类中会自动添加一个指针，指向虚继承的基类
class B: virtual public A
{
public:
	B():A(){cout << "B()...\n";}
	int m_b;
};

class C: virtual public A
{
public:
	C():A(){cout << "C()...\n";}
	int m_c;
};
//被虚继承的基类由最派生类(相对)真正继承
class D : public C, public B
{
public:
	D():A(), B(), C(){cout << "D()...\n";}
	int m_d;
};

int main(void)
{
	D d;	
	d.m_a = 9000;
	cout << d.m_a << endl;		
		
	
	return 0;
}
