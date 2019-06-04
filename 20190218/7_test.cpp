#include <iostream>
using namespace std;

class People
{
public:
	People(){cout << "People()...\n";}
	People(string id, string name, string sex, string addr)
	{
		m_strID = id;
		m_strName = name;
		m_strSex = sex;
		m_strAddr = addr;
		cout << "People(有参)...\n";
	}

	void info() const
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

class Teacher : public People
{
public:
	Teacher(){cout << "Teacher()...\n";}
	Teacher(string id, string name, string sex
			, string addr, string course, float salary)
		: People(id, name, sex, addr), m_strCourse(course)
		  , m_fSalary(salary)
	{
		cout << "Teacher(有参)...\n";
	}
	void info() const
	{
		People::info();
		cout << "course:" << m_strCourse 
			 << " salary:" << m_fSalary << endl; 
	}
private:
	string m_strCourse;
	float m_fSalary;
};

class Leader : public Teacher
{
public:
	Leader(){cout << "Leader()...\n";}
	Leader(string id, string name, string sex
		   , string addr, string course, float salary
		   , string level)
		: Teacher(id, name, sex, addr, course, salary)
		  , m_strLevel(level)
	{
		cout << "Leader(有参)...\n";	
	}

	void info() const
	{
		Teacher::info();
		cout << "level:" << m_strLevel << endl;
	}

private:
	string m_strLevel;
};

int main(void)
{
	People p("111111111", "rose", "female", "england");
	p.info();
	cout << "----------------------\n\n";

	Teacher t("2222222222", "jack", "male", "xxxxxx", "Paint", 99999);
	t.info();
	cout << "----------------------\n\n";
		
	Leader l("3333333", "congcong", "male", "china"
			 , "player", 8181818, "school leader");	
	l.info();	
	cout << "----------------------\n\n";
		
	return 0;
}
