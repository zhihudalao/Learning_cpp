#include <iostream>
using namespace std;

class People
{
public:
	People(){cout << "People()...\n";}
	~People(){cout << "~People()...\n";}
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
	~Teacher(){cout << "~Teacher()...\n";}
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

	void show() const
	{
		cout << "为中华之崛起而读书\n";
	}

private:
	string m_strCourse;
	float m_fSalary;
};

class Leader : public Teacher
{
public:
	Leader(){cout << "Leader()...\n";}
	~Leader(){cout << "~Leader()...\n";}
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
	//Leader ld("2222222222", "jack", "male", "xxxxxx", "Paint", 99999, "school leader");
	//Leader *p = new Leader("2222222222", "jack", "male", "xxxxxx", "Paint", 99999, "school leader");
	//Teacher *p = new Leader("2222222222", "jack", "male", "xxxxxx", "Paint", 99999, "school leader");

	People *p = new Leader("2222222222", "jack", "male", "xxxxxx", "Paint", 99999, "school leader");
	delete p;

	return 0;
}







