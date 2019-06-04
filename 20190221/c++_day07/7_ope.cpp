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
	void info() const
	{
		cout << m_v << '+' << m_r << 'i' << endl;
	}

	Complex operator+(const Complex &c)
	{
		Complex ret;
		ret.m_v = m_v+c.m_v;
		ret.m_r = m_r+c.m_r;
		cout << "operator+...\n";
		return ret;
	}

private:
	float m_v;
	float m_r;
};

int main(void)
{
	Complex c1(2, 3);
	Complex c2(20, 30);

	c1.info();
	c2.info();

	//Complex c3 = c1.operator+(c2);
	Complex c3 = c1+c2;
	c3.info();

	return 0;
}






