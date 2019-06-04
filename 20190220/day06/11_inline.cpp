#include <iostream>
using namespace std;

//inline函数-->内联函数
//使函数的实现代码替换函数调用

//若一段代码逻辑结构比较简单(没有多重条件判断，没有循环，没有递归，没有嵌套等逻辑比较复杂的语句)，又被频繁使用的时候
//可以将其封装成一个inline函数

//在类中定义的函数默认为inline函数
inline int cheng(int a, int b)
{
	return a*b;
}

int main(void)
{	
	cheng(3+2, 5+2);	
		
		
	return 0;
}
