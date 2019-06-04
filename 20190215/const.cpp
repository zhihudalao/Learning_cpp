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
//    Student(string id, string name)
//    {
//        m_strId = id;
//        m_strName = name;
//    }
    //1，产生对象空间
    //2，执行初始化列表
    //3，执行构造函数体
    Student(string id, string name, Date &date)
        : m_strId(id), m_strName(name), m_date(date)
    {
    }
    void info()
    {
        cout << m_strId << ' ' << m_strName << endl;
    }

private:
    const string m_strId;
    string m_strName;
    Date &m_date;

};

int main()
{
    Date date;
    Student s("12121213231", "jack", date);
    s.info();

    cout << "Hello World!" << endl;
    return 0;
}
