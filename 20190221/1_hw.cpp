#include <iostream>
using namespace std;

int sum(int a, int b = 0, int c = 0)
{
	return a+b+c;
}

int main(void)
{
	cout << sum(10) << endl;
	cout << sum(10, 10) << endl;
	cout << sum(10, 10, 10) << endl;

	return 0;
}
