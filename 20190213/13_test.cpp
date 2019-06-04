#include <iostream>
#include <string>
using namespace std;

struct STU
{
	int iId;
	string strName;
	float fScore;
};

void swap(STU &s1, STU &s2)
{
	STU tmp = s1;
	s1 = s2; 
	s2 = tmp;
}

void info(const STU &stu)
{
	cout << "id:" << stu.iId 
		 << " name:" << stu.strName
		 << " score:" << stu.fScore << endl;
}

int main(int argc, char *argv[])
{
	STU jack = {1001, "jack", 89};
	STU rose = {1002, "rose", 99};
	
	info(jack);
	info(rose);

	swap(jack, rose);
	cout << "------after swap-----\n";
	info(jack);
	info(rose);


	return 0;
}
