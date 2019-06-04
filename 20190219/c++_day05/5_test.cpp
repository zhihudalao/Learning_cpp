#include <iostream>
using namespace std;

class Shape
{
public:
	//为了实现多态，但本身的实现没有意义，
	//则可将该函数申明为   纯虚函数

	//含有纯虚函数的类称之为抽象类
	//抽象类不能定义对象

	//若抽象类的派生类没有对基类的纯虚函数重新定义	
	//则该派生类仍然为抽象类，不能定义对象
	virtual void area() = 0;

	Shape(string type):m_strType(type){}

private:
	string m_strType;

};

class Test:public Shape   // Test t;
{};


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


