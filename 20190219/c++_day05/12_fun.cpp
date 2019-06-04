#include <iostream>
using namespace std;

class A
{
public:
	void fun(){}
	void fun(int a){}
};

class B
{
public:
	void fun(){}
}

class C: public B
{
public:
	void fun(){B::fun();}
};

int main(void)
{


	return 0;
}
