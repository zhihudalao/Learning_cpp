#include <iostream>
using namespace std;

class People
{
public:
	People(){cout << "People()...\n";}
	virtual ~People(){cout << "~People()...\n";}
	People(string id, string name, string sex, string addr)
	{
		m_strID = id;
		m_strName = name;
		m_strSex = sex;
		m_strAddr = addr;
		cout << "People(有参)...\n";
	}

	virtual void info()
	{
		cout << "ID:" << m_strID 
			 << " name:" << m_strName
			 << " sex:" << m_strSex
			 << " addr:" << m_strAddr << endl;
	}

private:
	string m_strID;
	string m_strName;
	string m_strSex;
	string m_strAddr;
};

class Student : public People
{
public:
	Student(){cout << "Student()...\n";}
	~Student(){cout << "~Student()...\n";}
	Student(string id, string name, string sex, string addr
			, int stuId, float score)
		: People(id, name, sex, addr)
		  , m_iStuId(stuId), m_fScore(score) 
	{
		cout << "Student(有参...)\n";
	}
	void info()
	{
		People::info();
		cout << "stuid:" << m_iStuId << " score:" << m_fScore << endl;	
	}

private:
	int m_iStuId;
	float m_fScore;
};

int main(void)
{
	People *p = new Student;
	p->info();
	delete p;



	return 0;
}
