#include <iostream>
using namespace std;

//void print(int a, int b, int c = 90)
//void print(int a, int b = 90, int c = 89)
struct A
{
static void print(int a=190, int b = 90, int c = 89)
{
	cout << a << ' ' << b << ' ' << c  << endl;
}};
struct B
{
static void print()
{
	cout << "*********\n";
}
};
int main(void)
{
	A::print();
	B::print();

	return 0;
}
