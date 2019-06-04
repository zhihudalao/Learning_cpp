#include <iostream>
#include <string>
using namespace std;

class Student
{
public:
	void setInfo(int id, string name, float math
				 , float dance, float music)
	{
		m_iId = id;
		m_strName = name;
		m_fMath = math;
		m_fDance = dance;
		m_fMusic = music;
	}
	bool operator<(const Student &s) const
	{
		return totalScore() < s.totalScore();
	} 
	bool operator>(const Student &s) const
	{
		return totalScore() > s.totalScore();
	} 
	float totalScore() const
	{
		return m_fDance+m_fMath+m_fMusic;
	}

	float dance() const
	{
		return m_fDance;
	}

	friend ostream &operator<<(ostream &out, const Student &stu);

private:
	int m_iId;
	string m_strName;
	float m_fMath;
	float m_fDance;
	float m_fMusic;
};

ostream &operator<<(ostream &out, const Student &stu)
{
	out << "id:" << stu.m_iId << " name:" << stu.m_strName
	    << " math:" << stu.m_fMath 
		<< " dance:" << stu.m_fDance
		<< " music:" << stu.m_fMusic
		<< " total:" << stu.totalScore() << endl;
	return out;
}

template<typename U>
class MyLess
{
public:
	bool operator()(U a, U b)
	{
		return a<b;
	}	
};

template<typename U>
class MyGreater
{
public:
	bool operator()(U a, U b)
	{
		return a>b;
	}	
};

class ComByDance
{
public:
	bool operator()(const Student &s1, const Student &s2)
	{
		//return s1.dance() < s2.dance();
		return s1.dance() > s2.dance();
	}	
};


template<typename U, typename M = MyLess<U> >
class Sort
{
public:
	static void bubble(U *arr, int num)
	{
		M com;
		U tmp;
		for (int i=0; i<num-1; i++)
		{
			for (int j=0; j<num-1-i; j++)
			{
				if (com(arr[j], arr[j+1]))
				{
					tmp = arr[j];
					arr[j] = arr[j+1];
					arr[j+1] = tmp;
				}
			}
		}
	}
};

template<typename U>
void display(U *arr, int num)
{
	for (int i=0; i<num; i++)
	{
		cout << arr[i] << endl;
	}
}


int main(void)
{
	Student stu[3];
	stu[0].setInfo(1001, "jack", 90, 78, 99);
	stu[1].setInfo(1002, "rose", 78, 88, 92);
	stu[2].setInfo(1003, "piter", 88, 92, 63);

//	Sort<Student>::bubble(stu, 3);
//	Sort<Student, MyGreater<Student> >::bubble(stu, 3);
	Sort<Student, ComByDance>::bubble(stu, 3);

	display<Student>(stu, 3);



	return 0;
}




