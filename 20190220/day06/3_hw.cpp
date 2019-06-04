#include <iostream>

using namespace std;

class Student
{
public:
	virtual void test() = 0;
};

class Good: public Student
{
public:
	void test()
	{
		cout << "学神考试..\n";
	}
};

class ComeOn : public Student
{
public:
	ComeOn(){m_help = NULL;}
	ComeOn(Student *help)
	{
		m_help = help;
	}
	void test()
	{
		if (NULL != m_help)
		{
			m_help->test();
		}
		else
		{
			cout << "普通学生考试...\n";
		}
	}
private:
	Student *m_help;
};

int main(void)
{
	ComeOn c;
	c.test();

	ComeOn c2(new Good);
	c2.test();

	return 0;
}

