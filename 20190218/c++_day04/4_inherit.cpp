#include <iostream>
using namespace std;

//基类  --》 父类
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
	void displayID()
	{
		m_strID = "6isiasasa666";
		cout << "base ID : " << m_strID << endl;
	}

	void displayPhone()
	{
		m_strPhone = "11111111";
		cout << "base phone:" << m_strPhone << endl;
	}	

	void show()
	{
		cout << "为中华之崛起而读书" << endl;
	}
protected:
	string m_strPhone;

private:
	string m_strID;
	string m_strName;
	string m_strSex;
	string m_strAddr;
};

//派生类 --》子类
//class Student : People
//class Student : private People
//基类公有的数据对于派生类来说变成私有的
//基类受保护的数据对于派生类来说变成私有的
//基类私有的数据对于派生类来说不可访问
//class Student : public People
//基类公有的数据对于派生类来说仍然为公有
//基类受保护的数据对于派生类来说仍然为受保护的
//即必须通过成员函数间接访问
//基类私有的数据对于派生类来说不可访问
class Student : protected People
//基类公有的数据对于派生类来说变成受保护的
//基类受保护的数据对于派生类来说仍然为受保护的
//基类私有的数据对于派生类来说不可访问
{
public:
	void test()
	{
		m_strPhone = "8888888";
		cout << m_strPhone << endl;
		show();
	}
private:
	int m_iStuId;
	float m_fScore;
};

int main(void)
{
	cout << "people size --> " << sizeof(People) << endl;
	cout << "student size --> " << sizeof(Student) << endl;

	Student s;
//	s.show();
	s.test();
//	cout << s.m_strPhone << endl;


	return 0;
}
