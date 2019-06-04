#include <iostream>
#include <string>
using namespace std;

class People
{
public:
	People()
	{
		m_strFace = "cool";
		m_strName = "jack";
		m_strPhone = "888888888888888";
		cout << "People()...\n";
	}

	string phone()
	{
		return m_strPhone;
	}

	string name()
	{
		return m_strName;
	}

	void info()
	{
		cout << "name:" << m_strName << " face:" << m_strFace
		     << " phone:" << m_strPhone << endl;
	}

public:
	string m_strFace;

protected:
	string m_strPhone;

private:
	string m_strName;
};

class Student : public People
{
public:
	Student()
	{
		m_fScore = 90;
		m_strFace = "********";
	}
	void showPhone()
	{
		cout << "stu-->phone:" << m_strPhone << endl;
	}
#if 1
	//函数隐藏
	void info()
	{
		People::info();
		cout << "score:" << m_fScore << endl;	
	}
#endif

#if 0	
	void showName()
	{
		cout << "stu-->name:" << m_strName << endl;
	}
#endif
	string m_strFace;
private:
	float m_fScore;
};

int main(void)
{
	Student stu;

	cout << stu.m_strFace << endl;
	cout << stu.People::m_strFace << endl;
//	stu.info();
//	stu.People::info();

#if 0
	cout << "外貌:" << stu.m_strFace << endl;
	cout << "电话:" << stu.phone() << endl;
	stu.showPhone();
	cout << "名字:" << stu.name() << endl;
	//stu.showName();
#endif
	return 0;
}
