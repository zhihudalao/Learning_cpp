#include <iostream>
#include <string>
using namespace std;

class Staff
{
public:
	Staff(int id = 1000, const char *name = "staff")
		  : m_iId(id), m_strName(name){}
	virtual void pay() = 0;
private:
	const int m_iId;
	string m_strName;
};

class Skill : public Staff
{
public:
	Skill(int id = 2000, const char *name = "skill")
		: Staff(id, name)
	{}
	void pay()
	{
		cout << "工人是伟大的，他们创造了这个世界...\n";	
	}
};

class Sale : public Staff
{
public:
	Sale(int id = 3000, const char *name = "sale")
		: Staff(id, name)
	{}
	void pay()
	{
		cout << "他们连接了这个世界...\n";	
	}
};
//动态多态，动态联编，动态绑定
void getSalary(Staff *s)
{
	s->pay();
}
//静态多态-->函数重载-->静态联编，静态绑定
int  main(void)
{
	getSalary(new Skill);
	getSalary(new Sale);

	return 0;
}
