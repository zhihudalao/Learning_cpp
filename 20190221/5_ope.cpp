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

	friend Complex operator+(const Complex &c1, const Complex &c2);
	friend Complex operator-(const Complex &c1, const Complex &c2);

private:
	float m_v;
	float m_r;
};

Complex operator+(const Complex &c1, const Complex &c2)
{
	Complex ret;
	ret.m_v = c1.m_v+c2.m_v;
	ret.m_r = c1.m_r+c2.m_r;
	cout << "operator+...\n";
	return ret;
}

Complex operator-(const Complex &c1, const Complex &c2)
{
	Complex ret;
	ret.m_v = c1.m_v-c2.m_v;
	ret.m_r = c1.m_r-c2.m_r;
	cout << "operator-...\n";
	return ret;
}

int main(void)
{
	Complex c1(2, 3);
	Complex c2(20, 30);

	c1.info();
	c2.info();

	Complex c3;
	c3 = c1+c2;
	c3.info();

	c3 = c2-c1;
	c3.info();

	return 0;
}






