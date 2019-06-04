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
//class D : virtual public B, virtual public C
class D : public B, public C
{
public:
	D():A(), B(), C(){cout << "D()...\n";}
	int m_d;
};

int main(void)
{
	cout << "A size:" << sizeof(A) << endl;
	cout << "B size:" << sizeof(B) << endl;
	cout << "C size:" << sizeof(C) << endl;
	cout << "D size:" << sizeof(D) << endl;

	B b;

#if 0
	D d;
	d.m_a = 9999;
	cout << d.m_a << endl; 	

	d.B::m_a = 9999;
	d.C::m_a = 8888;

	cout << d.B::m_a << endl; 	
	cout << d.C::m_a << endl; 	
#endif
	return 0;
}
