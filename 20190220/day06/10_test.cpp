#include <iostream>
#include <string.h>
using namespace std;

namespace A
{
	char usr_name[] = "namespace_A";
	void showName()
	{
		cout << usr_name << endl;
//		B::showName();
	}
}

namespace B
{
	char usr_name[] = "namespace_B";
	void showName()
	{
		cout << usr_name << endl;
//		A::showName();
	}
}

int main(void)
{
	A::showName();
	B::showName();

	strcpy(A::usr_name, "good");
	A::showName();

	return 0;
}
