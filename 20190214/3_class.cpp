#include <iostream>
#include <string>
using namespace std;

class Student
{
public:
	//无参构造函数
	Student()
	{
		iId = 1000;
		strName = "student";
		fScore = 60.0f;
		cout << "Student()...\n";
	}
	//普通的有参构造函数
	Student(int id, string name, float score)
	{
		iId = id;
		strName = name;
		fScore = score;
		cout << "Student(参数)...\n";
	}
	void info()
	{
		cout << "id:" << iId << " name:" << strName 
			 << " score:" << fScore << endl;
	}

	void setName(string name)
	{
		strName = name;
	}

private:
	int iId;
	string strName;
	float fScore;
};

int main(void)
{
	Student s(1001, "jack", 99);
	s.info();

	Student s2;
	s2.info();

	return 0;
}
