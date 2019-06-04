#include <iostream>
#include <string>
using namespace std;

//void fun(int a[]){}
//void fun(int a[32]){}
//void fun(int *a){}
void fun(int (&ref)[32]){}

//void test(int t[3][4]){}
//void test(int (*t)[4]){}
//void test(int t[][4]){}
void test(int (&ref)[3][4]){}

//不存在引用数组

int main(int argc, char *argv[])
{	
	int buf[3][4];
	test(buf);

	int arr[32];
	fun(arr);


#if 0
	int a = 189;
	int *p = &a;

	int* &ref = p;
	cout << *p << ' ' << *ref << endl;

	int aa[32] = {0};
	int (&raa)[32] = aa;
//	int *paa = aa;

	int bb[3][2];
	int (&rbb)[3][2] = bb;
//	int (*pbb)[2] = bb;

	int cc[3][4][5];
	int (&rcc)[3][4][5] = cc;
#endif



	return 0;
}
