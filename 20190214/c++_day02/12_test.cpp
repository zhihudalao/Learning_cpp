#include <iostream>
#include <string>
#include <string.h>
using namespace std;

struct STU
{
	STU()
	{
		STU(998);
	}
	STU(int i)
	{
		cout << "i = " << i << '\n';
	}
	~STU()
	{
		cout << "~STU()....\n";
	}
};

int main(void)
{
	STU s;

	return 0;
}
