#include <iostream>
#include <string>
#include <math.h>
#include <stdlib.h>
using namespace std;

class Point
{
public:
	Point()
	{
		m_x = 0;
		m_y = 0;
		cout << "Player()...\n";
	}
	//Point(Point *this, int x, int y)
	Point(int x, int y)
	{
		this->m_x = x;
		this->m_y = y;
	}

	//void show(Point *this)
	void show()
	{
		cout << "show:" << (void*)this << endl;
		cout << "point(" << this->m_x << ',' << this->m_y << ")\n";
	}

private:
	int m_x;
	int m_y;
};

int main(void)
{
	Point p(5, 7);  // Point(&p, 5, 7);

	p.show(); //   show(&p1);

	cout << (void*)&p << endl;

	return 0;
}
