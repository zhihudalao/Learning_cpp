#include <iostream>
using namespace std;

class Student
{
public:
	Student(int id = 1000, string pwd = "123456")
	{
		m_iId = id;
		m_strPwd = pwd;
	}
	void info()
	{
		cout << "id:" << m_iId << " pwd:" << m_strPwd << endl;
	}
private:
	int m_iId;
	string m_strPwd;
};

int main(void)
{
	Student stu(1001, "abc");
	Student stu2(1002);
	Student stu3;

	stu.info();
	stu2.info();
	stu3.info();

	return 0;
}
