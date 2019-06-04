#include <iostream>

using namespace std;

struct Date
{
    int iYear;
    int iMonth;
    int iDay;
};

class Student
{
public:
    //初始化列表
    //1，产生对象空间
    //2，执行初始化列表
    //3，执行构造函数体
    Student(string id, string name, Date &date)
        : m_strId(id), m_strName(name), m_date(date)
    {
    }
    //const成员函数
    //void info(const Student *this)
    //在const成员函数中，不能直接修改非静态成员变量
    //能直接修改静态成员变量

    //void fun(Student *this)
    void fun()
    {
        cout << "fun..." << endl;
    }
    //可以直接调用其他const成员函数
    //可以直接调用静态成员函数
    //void info(const Student *this)
    void info() const
    {
//        Student s("sss");
//        s.m_strName = "assasa";
//        this->fun();  //fun(this);
//        this->m_strName  = "rose";  //error
        m_test = 19191;
        cout << m_strId << ' ' << m_strName << endl;
    }

private:
    static int m_test;
    const string m_strId;
    string m_strName;
    Date &m_date;
};

int Student::m_test = 1000;

int main()
{
    Date date;
    Student s("12121213231", "jack", date);
    s.info();  //info(&s);

    const Student s2("121@@@@@@", "##jack####", date);
    s2.info();
    //const对象只能调用const成员函数和static成员函数
//    s2.fun();//error   //fun(&s2);

    cout << "Hello World!" << endl;
    return 0;
}
