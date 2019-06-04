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

	friend ostream& operator<<(ostream &out, const Complex &c);
	friend istream& operator>>(istream &in, Complex &c);

private:
	float m_v;
	float m_r;
};

ostream& operator<<(ostream &out, const Complex &c)
{
	out << c.m_v << '+' << c.m_r << 'i';
	return out;
}

istream& operator>>(istream &in, Complex &c)
{
	in >> c.m_v >> c.m_r;
	return in;
}

int main(void)
{
	Complex c(20, 30);
	cout << c << endl;
	cin >> c;
	cout << c << endl;

	return 0;
}






