#include <iostream>
using namespace std;

class A
{
public:
	int m_a;
};

//若虚继承基类，则派生类中会自动添加一个指针，指向虚继承的基类
//class B: virtual public A
class B:  public A
{
public:
	int m_b;
};

//class C: virtual public A
class C:  public A
{
public:
	int m_c;
};

class D : public B, public C
{
public:
	int m_d;
};

int main(void)
{
	cout << "A size:" << sizeof(A) << endl;
	cout << "B size:" << sizeof(B) << endl;
	cout << "C size:" << sizeof(C) << endl;
	cout << "D size:" << sizeof(D) << endl;

	D d;
//	d.m_a = 9999;
//	cout << d.m_a << endl; 	
	d.B::m_a = 9999;
	d.C::m_a = 8888;

	cout << d.B::m_a << endl; 	
	cout << d.C::m_a << endl; 	

	return 0;
}
