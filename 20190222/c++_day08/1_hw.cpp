#include <iostream>
using namespace std;

class Point
{
public:
	Point(int x = 0, int y = 0):m_y(y), m_x(x){}
	void set(int x=0, int y=0){m_x=x; m_y = y;}
	int x() const
	{
		return m_x;
	}
	int y() const
	{
		return m_y;
	}
private:
	int m_x;
	int m_y;
};

ostream& operator<<(ostream &out, const Point &point)
{
	out << '(' << point.x() << ',' << point.y() << ')';
	return out;
}

class Figure
{
public:
	Figure(string name = "图形"):m_strName(name){}
	virtual void onDraw() = 0;

protected:
	string m_strName;
};

class Triangle : public Figure
{
public:
	Triangle(string name="三角形"):Figure(name){}
	Triangle(int x1, int y1, int x2, int y2
			 , int x3, int y3, string name="三角形"):Figure(name)
	{
		m_point[0].set(x1, y1);
		m_point[1].set(x2, y2);
		m_point[2].set(x3, y3);
	}

	void onDraw()
	{
		cout << m_strName << ':' << m_point[0]
			 << ',' << m_point[1] << ',' << m_point[2] << endl;
	}

private:
	Point m_point[3];
};

class Circle : public Figure
{
public:
	Circle(float r, int x = 0, int y = 0)
		   : Figure("圆形"), m_center(x, y), m_radius(r){}
	void onDraw()
	{
		cout << m_strName << ':' << m_center 
			 <<	" 半径:" << m_radius << endl;
	}
private:
	Point m_center;
	float m_radius;	
};

class Painter
{
public:
	void draw(Figure* f)
	{
		f->onDraw();
	}
};

int main(void)
{

	Triangle t(1,2, 10, 40, 34, 89);
	Circle c(5, 12, 90);
	
	Painter p;
	p.draw(&t);
	p.draw(&c);


	return 0;
}
