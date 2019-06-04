#include <iostream>
#include <string>
using namespace std;

class A
{
public:
	A(){}
	A(int a):m_a(a){cout << "A(int)\n";}
	int m_a;
};
class B
{
public:
	B(){}
	B(int b):m_b(b){cout << "B(int)\n";}
	int m_b;
};

//多继承情况下，基类构造顺序与在初始化列表中的顺序无关
//和继承列表的先后顺序保持一致
class C: public A, public B
{
public:
	C(){}
	//C(int a, int b, int c):A(a), B(b), m_c(c)
	C(int a, int b, int c):B(b), A(a), m_c(c)
	{
		cout << "C(int,int,int)...\n";
	}
	int m_c;
};

int main(void)
{
	cout << "A size:" << sizeof(A) << endl;
	cout << "B size:" << sizeof(B) << endl;
	cout << "C size:" << sizeof(C) << endl;

	C c(1,2,3);
	A a;
	a = c;
	cout << a.m_a << endl;
	
	B b;
	b = c;
	cout << b.m_b << endl;







	return 0;
}
