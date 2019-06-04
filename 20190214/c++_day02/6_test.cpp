#include <iostream>
#include <string>
using namespace std;

class Score
{
public:
	//若没有自定义构造函数，则默认生成一个空的无参构造函数
	Score(){m_iNum = 0;  cout << "Score()...\n";}
	//若自定义了构造函数，则不会默认生成一个无参构造函数
	Score(int id){m_iNum = id; cout << "Score(有参)...\n";}
	void inscore()
	{
		cout << "请依次输入学号，数学，英语，编程程序:\n";
		cin >> m_iNum >> m_fMath >> m_fEnglish >> m_fProgram;
		m_fAvg = (m_fMath + m_fEnglish + m_fProgram)/3;
	}
	void show()
	{
		cout << "学号:" << m_iNum << " 数学:" << m_fMath
         	 << " 英语:" << m_fEnglish 
			 << " 编程:" << m_fProgram 
			 << " 平均成绩:" << m_fAvg << endl;
	}
private:
	int m_iNum;
	float m_fMath;
	float m_fEnglish;
	float m_fProgram;
	float m_fAvg;
};

int main(void)
{
	int num = 0;
	cout << "请输入学生的个数:\n";
	cin >> num;

	Score *s = new Score[num];
	for (int i=0; i<num; i++)
	{
		s[i].inscore();
	}
	cout << "--------------------\n\n";
	for (int i=0; i<num; i++)
	{
		s[i].show();
	}
	cout << "--------------------\n\n";



	return 0;
}
