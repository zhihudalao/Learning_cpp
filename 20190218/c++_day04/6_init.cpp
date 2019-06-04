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

	void info()
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
	//在派生类的初始化列表中调用基类的构造函数对基类数据初始化
	//若没有显式的调用基类构造函数，则默认调用基类的无参构造函数
	//Student(){cout << "Student()...\n";}
	//显式调用基类无参构造函数实现基类数据初始化
	//Student():People(){cout << "Student()...^_^\n";}
	//显式调用基类有参构造函数实现基类数据初始化
	Student():People("1010101", "rose", "female", "england")
	{
		cout << "Student()...^_^\n";
	}

	//Student(int stuId, float score)
	//Student(int stuId, float score):People()
	Student(int stuId, float score)
		:People("1010101", "rose", "female", "england")
	{
		m_iStuId = stuId;
		m_fScore = score;
		cout << "Student(有参)...^_^\n";
	}

	Student(string ID, string name, string sex
			, string addr, int id, float score)
		: People(ID, name, sex, addr)
	{
		m_iStuId = id;
		m_fScore = score;
	}

private:
	int m_iStuId;
	float m_fScore;
};

int main(void)
{
	//Student s(1001, 90);
	Student s("9109101", "rose", "female", "england", 1001, 90);
	s.info();

	#if 0
	Student s;
	s.info();
#endif
	return 0;
}
