#include <iostream>
using namespace std;
class OO
{
public:
	OO()
	{
		cout << "OOOn...\n";
	}
	OO(int a)
	{
		cout << "有参... a = " << a << "\n";
	}
};

class Test
{
public:
	Test(){}
	//成员变量的初始化顺序和在初始化列表中的先后顺序无关
	//与申明定义的顺序保持一致
	Test(int data)
		: m_b(data), m_a(m_b), m_o(m_b)
	{
		cout << "m_a=" << m_a << " m_b=" << m_b << endl; 
	}

	int m_a;
	int m_b;
	OO m_o;
};

int main(void)
{
	Test t(1998);


	return 0;
}
