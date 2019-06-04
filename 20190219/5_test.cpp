#include <iostream>
using namespace std;

class Shape
{
public:
	virtual void area()
	{
		cout << "图形面积为--->未知\n";
	}
};
class Circle : public Shape
{
public:
	Circle():m_fRadius(0){}
	Circle(float r):m_fRadius(r){}
	void area()
	{
		cout << "圆形:半径->" << m_fRadius << " 面积--->" << 3.14*m_fRadius*m_fRadius << endl;
	}

private:
	float m_fRadius;
};
class Triangle: public Shape
{
public:
	Triangle(){}
	Triangle(float w, float h) : m_w(w), m_h(h){}
	void area()
	{
		cout << "三角形:底->" << m_w << " 高->" << m_h 
			 << " 面积--->" << m_w*m_h/2 << endl;
	}

private:
	float m_w;
	float m_h;
};
class Square: public Shape
{
public:
	Square(){}
	Square(float w): m_w(w){}
	void area()
	{
		cout << "正方形:边长->" << m_w << " 面积--->" << m_w*m_w << endl;
	}
private:
	float m_w;
};

void showShapeArea(Shape &shape)
{
	shape.area();
}

int main(void)
{
	Circle c(10);
	Triangle t(3, 4);
	Square s(6);
	Shape shape;

	showShapeArea(c);
	showShapeArea(t);
	showShapeArea(s);
	showShapeArea(shape);

	return 0;
}


