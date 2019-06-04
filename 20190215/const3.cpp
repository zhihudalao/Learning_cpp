#include <iostream>

using namespace std;

class Date
{
public:
    Date(){cout << "Date()...\n";}
    Date(int y, int m, int d)
        :m_iYear(y), m_iMonth(m), m_iDay(d)
    {
        cout << "Date(int,int,int)...\n";
        cout << m_iYear << '/' << m_iMonth
             << '/' << m_iDay << endl;
    }
private:
    int m_iYear;
    int m_iMonth;
    int m_iDay;
};

class Student
{
public:
    //子对象的初始化，在初始化列表中调用其构造函数完成
    //若没有显式的调用，默认调用子对象的无参构造函数
//    Student(){cout << "Student()...\n";}
//    Student(): m_born(){cout << "Student()...\n";}
    Student(): m_born(1987, 11, 10){cout << "Student()...\n";}
    //初始化列表
    //1，产生对象空间
    //2，执行初始化列表
    //3，执行构造函数体
//    Student(string id, string name): m_strId(id), m_strName(name)
//    Student(string id, string name): m_born(), m_strId(id), m_strName(name)
    Student(string id, string name): m_born(11,11,11), m_strId(id), m_strName(name)
    {
        cout << "Student(id,string)...\n";
    }
    Student(string id, string name, int y, int m, int d)
        : m_born(y, m, d), m_strId(id), m_strName(name)
    {
        cout << "Student(id,string,int,int,int)...\n";
    }

    void info() const
    {
        cout << m_strId << ' ' << m_strName << endl;
    }

private:
    const string m_strId;
    string m_strName;
    //若类A的对象作为类B的成员变量
    //则将该成员变量称之为类B的子对象
    Date m_born;
};


int main()
{
    Student s("516281281", "jack", 11, 89, 12);

    cout << "Hello World!" << endl;
    return 0;
}


















