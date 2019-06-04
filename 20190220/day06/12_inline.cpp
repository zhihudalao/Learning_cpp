#include <iostream>
using namespace std;

//在类中定义的函数默认为inline函数
class Test
{
public:
	inline Test(){}
	inline static void fun(){}
	inline virtual void test(){}
	inline ~Test(){}
};

class AA
{
public:
	//static AA(){}  //error
	inline static void fun(){}
	//static virtual void test(){} //error
	//static ~AA(){}  //error
};

int main(void)
{	
	Test t;	
		
	return 0;
}
