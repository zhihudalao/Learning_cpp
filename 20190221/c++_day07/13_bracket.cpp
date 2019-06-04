#include <iostream>
using namespace std;

class Complex
{
public:
	Complex(float v = 0, float r = 0)
	{
		m_v = v;
		m_r = r;
	}
	bool operator<(const Complex &c) const
	{
		cout << "operator<...\n";
		return true;
	}

private:
	float m_v;
	float m_r;
};

template<typename U>
class MyLess
{
public:
	bool operator()(U a, U b)
	{
		return a<b;
	}	
};

int main(void)
{
	MyLess<int> myless;
	//if (myless.operator()(12, 45))	
	if (myless(12, 45))	 //函数对象
	{	
	}

	Complex c(12, 89);
	Complex c2(12, 9);
	MyLess<Complex> com;
	com(c, c2);


	return 0;
}




