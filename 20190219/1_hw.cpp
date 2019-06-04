#include <iostream>
#include <math.h>
#include <stdlib.h>
using namespace std;

class Point
{
public:
	Point(){m_x=0; m_y = 0;cout << "Point()...\n";}
	Point(double x, double y)
	{
		m_x = x;
		m_y = y;
		cout << "Point(参数...)\n";
	}
	double getX()
	{
		return m_x;
	}
	double getY()
	{
		return m_y;
	}
	double setX(double x)
	{
		m_x = x;
		return m_x;
	}
	double setY(double y)
	{
		m_y = y;
		return m_y;
	}
private:
	double m_x;
	double m_y;	
};

class Circle
{
public:
	Circle(){m_radius=0; cout << "Circle()...\n";}
	Circle(double r){m_radius = r; cout << "Circle(参数)\n";}
	Circle(double x, double y, double r)
		:m_center(x, y)
	{
		m_radius = r; cout << "Circle(参数)\n";
	}
	/*
	Circle(Point center, double r)
		: m_center(center)
	{m_radius = r; cout << "Circle(参数)\n";}
	*/
	Point getCenter()
	{
		return m_center;
	}
	double getRadius()
	{
		return m_radius;
	}

	bool isPointInside(Point &point)
	{
		double distance = sqrt(pow(abs(point.getX()-m_center.getX()),2)
		+pow(abs(point.getY()-m_center.getY()), 2));
		return distance <= m_radius;
	}

private:
	Point m_center;
	double m_radius;
};

int main(void)
{
	Circle c(0, 0, 5);
	Point p(3, 4);
	if (c.isPointInside(p))
	{
		cout << "inside...\n";	
	}
	else 
	{
		cout << "ouside...\n";
	}

	p.setX(10);
	p.setY(2);
	if (c.isPointInside(p))
	{
		cout << "inside...\n";	
	}
	else 
	{
		cout << "ouside...\n";
	}



	return 0;
}
