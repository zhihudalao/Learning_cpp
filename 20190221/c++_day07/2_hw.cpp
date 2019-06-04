#include <iostream>
#include <string>
using namespace std;

class Student
{
public:
	Student(int id=100, string name="student", float score=60)
		: m_iId(id), m_strName(name), m_fScore(score)
	{}
	void info()
	{
		cout << "id:" << m_iId << " name:" << m_strName
			 << " score:" << m_fScore << endl;
	}

	friend void showGrade(Student &stu);

	void setInfo(int id=100, string name="student", float score=60)
	{
		m_iId = id;
		m_strName = name;
		m_fScore = score;
	}
	float score()
	{
		return m_fScore;
	}

private:
	int m_iId;
	string m_strName;
	float m_fScore;
};

void showGrade(Student &stu)
{
	int level = stu.m_fScore/10;
	cout << "level = " << level << endl;
	switch (level)
	{
	case 9:
		cout << "优\n";
		break;
	case 8:
		cout << "良\n";
		break;
	case 7:
		cout << "中\n";
		break;
	case 6:
		cout << "及格\n";
		break;
	default:
		cout << "加油\n";
		break;
	}
}


int main(void)
{
	Student stu[5];
	int id;
	string name;
	float score;

	for (int i=0; i<5; i++)
	{
		cout << "请输入学生的id,name, score:\n";
		cin >> id >> name >> score;
		stu[i].setInfo(id, name, score);
	}

	float fSum = 0;
	for (int i=0; i<5; i++)
	{
		stu[i].info();
		fSum += stu[i].score();
	}
	cout << "平均分:" << fSum/5 << endl;

	for (int i=0; i<5; i++)
	{
		showGrade(stu[i]);
	}

	return 0;
}
