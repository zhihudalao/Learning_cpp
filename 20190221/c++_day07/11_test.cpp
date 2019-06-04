#include <iostream>
using namespace std;


int main(void)
{
	int i = 0;
	int j = 0;
	for (; (i<3, j<5); i++, j++)
	{
		cout << "hello world --> " << i << ' ' << j << "\n";
	}


	return 0;
}
