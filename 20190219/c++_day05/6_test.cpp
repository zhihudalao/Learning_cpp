#include <iostream>
using namespace std;

class Teacher
{
public:
	Teacher()
	{
		m_fBasicSalary = 0;
		m_iWorkTime = 0;
	}
	void setWorkTime(int hour)
	{
		m_iWorkTime = hour;
	}
	
	virtual void info() = 0;
//private:
protected:
	float m_fBasicSalary;
	int m_iWorkTime;
};

class Professor : public Teacher
{
public:
	Professor(){m_fBasicSalary = 5000;}
	void info()
	{
		cout << "教授:\n" 
			 << "    基本工资 --> " << m_fBasicSalary << endl
			 << "    课时     --> " << m_iWorkTime << endl
			 << "    总工资   --> " << m_fBasicSalary+m_iWorkTime*50
			 << endl << endl;
	}
};
class AsPro : public Teacher
{
public:
	AsPro(){m_fBasicSalary=3000;}
	void info()
	{
		cout << "副教授:\n" 
			 << "     基本工资 --> " << m_fBasicSalary << endl
			 << "     课时     --> " << m_iWorkTime << endl
			 << "     总工资   --> " << m_fBasicSalary+m_iWorkTime*30
			 << endl << endl;
	}
};
class Lecturer : public Teacher
{
public:
	Lecturer(){m_fBasicSalary = 2000;}
	void info()
	{
		cout << "讲师:\n" 
			 << "    基本工资 --> " << m_fBasicSalary << endl
			 << "    课时     --> " << m_iWorkTime << endl
			 << "    总工资   --> " << m_fBasicSalary+m_iWorkTime*20
			 << endl << endl;
	}
};

void tecInfo(Teacher &tec)
{
	tec.info();
}

int main(void)
{
	Professor pro;
	pro.setWorkTime(10);

	AsPro ap;
	ap.setWorkTime(5);

	Lecturer lec;
	lec.setWorkTime(8);

	tecInfo(pro);
	tecInfo(ap);
	tecInfo(lec);

	return 0;
}


