#include <iostream>
#include <string>
#include <string.h>
using namespace std;

struct STU
{
	int iId;
	string strName;
	 STU()
	{
		iId = 1000;
		strName = "student";
	}

	STU(int id, string name)
	{
		iId = id;
		strName = name;
	}

	void info()
	{
		cout << iId << ' ' << strName << endl;
	}

	STU(const STU &other)
	{
		iId = other.iId;
		strName = other.strName;
	}
};

int main(void)
{
	struct STU s;
	//s.init();
	struct STU s2(1001, "jack");

	s.info();

	return 0;
}
