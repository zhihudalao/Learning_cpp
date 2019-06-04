#include <iostream>
using namespace std;

struct Student
{
	Student(){}
	Student(int id, string name, float score)
	{
		iId = id;
		strName = name;
		fScore = score;
	}

	void info() const
	{
		cout << "id:" << iId << " name:" << strName
			 << " score:" << fScore << endl;
	}
	int iId;
	string strName;
	float fScore;
};

//template<class U>
template<typename U>
void print(U a)
{
	cout << a << endl;
}
#if 1
template<>
void print(Student& s)
{
	s.info();
}
#endif

int main(void)
{
	print<int>(1998);
	print<float>(3.14f);

	Student s(1001, "jack", 89);
	print<Student&>(s);

	return 0;
}
