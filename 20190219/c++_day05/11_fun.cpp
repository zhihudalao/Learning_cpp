#include <iostream>
using namespace std;

void print(int a)  //void _z5printi(int a)
{
	cout << "int-->" << a << endl;
}

void print(int a, float f)  //void _z5printif(int a, float f)
{}
void print(int a, int b)  // void _z5printii(int a, int b)
{}

void print(float f) //void _z5printf(float f)
{
	cout << "float-->" << f << endl;
}

void print(char c)
{
	cout << "char-->" << c << endl;
}

struct Student
{
};

void print(Student &stu)
{
	cout << "Student-->" << "******" << endl;
}

int main(void)
{
	//静态多态-->静态联编
	print(90);  //  _z5printi(90);
	print('A');
	print(3.14f);	//_z5printf(3.14f);
	Student stu;
	print(stu);


	return 0;
}
