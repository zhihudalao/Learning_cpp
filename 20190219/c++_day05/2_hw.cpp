#include <iostream>
using namespace std;

class Rectangle
{
public:
	Rectangle(int w, int h):m_w(w), m_h(h){cout << "rectangle(有参)\n";}
	Rectangle():m_w(0), m_h(0){cout << "rectangle()\n";}
	int getW()
	{
		return m_w;
	}
	int getH()
	{
		return m_h;
	}

	void set(int w, int h)
	{
		m_w = w;
		m_h = h;
	}

	void showArea()
	{
		cout << "w:" << m_w << " h:" << m_h
		     << " area:" << m_w*m_h << endl;
	}

private:
	int m_w;
	int m_h;
};

class Square: public Rectangle
{
public:
	Square(){}
	Square(int w):Rectangle(w, w){}
	void set(int w)
	{
		Rectangle::set(w, w);
	}

private:
};

int main(void)
{
	Rectangle r(3, 4);
	r.showArea();

	r.set(5, 6);	
	r.showArea();

	cout << "-----------------\n";
	Square s(10);
	s.showArea();

	s.set(9);
	s.showArea();


	return 0;
}




