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

	void setInfo(int id=100, string name="student", float score=60)
	{
		m_iId = id;
		m_strName = name;
		m_fScore = score;
	}
	float score() const
	{
		return m_fScore;
	}

private:
	int m_iId;
	string m_strName;
	float m_fScore;
};

bool operator<(const Student &s1, const Student &s2)
{
	return s1.score() < s2.score();
}
// keep is sample and stupid
bool operator>(const Student &s1, const Student &s2)
{
	return s1.score() > s2.score();
}

bool operator==(const Student &s1, const Student &s2)
{
	return s1.score() == s2.score();
}

int main(void)
{
	Student s1(1001, "jack", 90);
	Student s2(1002, "rose", 80);

	if (s1 < s2){cout << "<\n";}
	if (s1 > s2){cout << ">\n";}
	if (s1 == s2){cout << "==\n";}

	return 0;
}
