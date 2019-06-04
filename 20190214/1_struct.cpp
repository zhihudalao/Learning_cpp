#include <iostream>
#include <string>
using namespace std;

struct Student
{
	void init(int id, string name, float score)
	{
		iId = id;
		strName = name;
		fScore = score;
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
	Student s;
	s.init(1001, "jack", 90);

	Student s2;
	s2.init(1002, "rose", 89);

	s.info();
	s2.info();
	
	s2.strName = "冬瓜";
//	s2.setName("冬瓜");
	s2.info();






	return 0;
}
