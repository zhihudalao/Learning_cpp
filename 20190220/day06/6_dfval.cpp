#include <iostream>
using namespace std;
namespace A
{
void print(int a=190, int b = 90, int c = 89)
{
	cout << a << ' ' << b << ' ' << c  << endl;
}}

namespace B
{
void print()
{
	cout << "*********\n";
}
}
int main(void)
{
	A::print();
	B::print();


	return 0;
}
