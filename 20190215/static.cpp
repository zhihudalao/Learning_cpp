#include <iostream>
#include <string.h>
using namespace std;

class Student
{
public:
    Student()
    {
    }
    Student(const char *name, float score)
    {
        m_iId = m_iBaiscId++;
        strcpy(m_caName, name);
        m_fScore = score;
    }

    void info()
    {
        cout << "id:" << m_iId
             << " name:" << m_caName
             << " score:" << m_fScore << endl;
    }

public:
//private:
    //不单独属于某个对象，是所有对象共享的
    static int m_iBaiscId;

private:

    int m_iId;
    char m_caName[32];
    float m_fScore;
};

int Student::m_iBaiscId = 1000;

int main()
{
    //静态公有成员可以通过类名直接使用
    //先于任何对象存在
    cout << Student::m_iBaiscId << endl;

    Student jack("jack", 89);
    Student rose("rose", 99);
    Student tom("tom", 97);
    cout << sizeof(Student) << endl;

    tom.info();
    jack.info();
    rose.info();

    cout << Student::m_iBaiscId << endl;

    cout << "Hello World!" << endl;
    return 0;
}
