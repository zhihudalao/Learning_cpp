#include <iostream>
#include <string>
using namespace std;

struct STU
{
	int iId;
	string strName;
	float fScore;

	void init()
	{
		cout << "请依次输入学生的id,name,score:\n";
		cin >> iId >> strName >> fScore;
	}

	void info()
	{
		cout << "id:" << iId << " name:" << strName
			 << " score:" << fScore << endl;	
	}
};

int main(int argc, char *argv[])
{
	STU *stu = new STU[3];
	for (int i=0; i<3; i++)
	{
		stu[i].init();
	}
	for (int i=0; i<3; i++)
	{
		stu[i].info();
	}

	return 0;
}
