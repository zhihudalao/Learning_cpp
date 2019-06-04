#include <iostream>
#include <string>
#include <string.h>
using namespace std;

struct STU
{
	int iId;
	string strName;
};

void init(struct STU *stu)
{
	stu->iId = 1000;
	stu->strName = "student";
}

void init(struct STU *stu, int id, string name)
{
	stu->iId = id;
	stu->strName = name;
}

void info(struct STU *stu)
{
	cout << stu-> iId << ' ' << stu->strName << endl;
}

void init(struct STU *s1, struct STU *s2)
{
	s1->iId = s2->iId;
	s1->strName = s2->strName;
}

int main(void)
{
	struct STU s;
	//init(&s);
	init(&s, 1001, "jack");

	info(&s);

//	struct STU s2;
//	init(&s2, &s1);


	return 0;
}
