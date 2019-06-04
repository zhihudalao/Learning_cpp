#include <iostream>
#include <string>
using namespace std;

class Student
{
public:
	Student(int id=100, string name="student", float score=60)
		: m_iId(id), m_strName(name), m_fScore(score)
	{}

	friend ostream& operator<<(ostream &out, const Student &stu);
	friend istream& operator>>(istream &in, Student &stu);

private:
	int m_iId;
	string m_strName;
	float m_fScore;
};

ostream& operator<<(ostream &out, const Student &stu)
{
	out << "id:" << stu.m_iId << " name:" << stu.m_strName
	    << " score:" << stu.m_fScore;
	return out;
}

istream& operator>>(istream &in, Student &stu)
{
	in >> stu.m_iId >> stu.m_strName >> stu.m_fScore;
	return in;
}

int main(void)
{
	Student stu;
	cin >> stu;
	cout << stu << endl;


	return 0;
}
