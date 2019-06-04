#include <iostream>
#include <string>
using namespace std;

struct STU
{
	int iId;
	string strName;
	float fScore;
};

void init(STU *stu, int num)
{
	for (int i=0; i<num; i++)
	{
		cout << "请依次输入学生的id,name,score:\n";
		cin >> stu[i].iId >> stu[i].strName >> stu[i].fScore;
	}	
}

void print(const STU *stu, int num)
{
	for (int i=0; i<num; i++)
	{
		cout << "id:" << stu[i].iId << " name:" << stu[i].strName
			 << " score:" << stu[i].fScore << endl;
	}	

}

int main(int argc, char *argv[])
{
	STU *stu = new STU[3];
	init(stu, 3);
	print(stu, 3);

	return 0;
}
