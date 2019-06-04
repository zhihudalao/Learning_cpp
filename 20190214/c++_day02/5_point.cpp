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
	Point(int x, int y)
	{
		m_x = x;
		m_y = y;
	}

	double distance(const Point &other)
	{
		return sqrt(pow(abs(m_x-other.m_x), 2) + pow(abs(m_y-other.m_y), 2));
	}	

	void show()
	{
		cout << "point(" << m_x << ',' << m_y << ")\n";
	}

private:
	int m_x;
	int m_y;
};

int main(void)
{
	Point p1(2, 3);
	Point p2(5, 7);

	p1.show();
	p2.show();
	cout << p1.distance(p2) << endl;

	return 0;
}
