#include <iostream>
#include <string>
using namespace std;

class Staff
{
private:
    int m_iId;
    string m_strName;

    static int m_iCount;

public:
    Staff()
    {
        this->m_iId = 1000;
        this->m_strName = "staff";
        m_iCount++;
    }

    Staff(int id, string name)
    {
        this->m_iId = id;
        this->m_strName = name;
        m_iCount++;
    }

    static void count()
    {
        cout << "total number :" << m_iCount << endl;
    }
//    void init(Staff *this, int id, string name)
    void init(int id, string name)
    {
        this->m_iId = id;
        this->m_strName = name;
    }

    //void info(Staff *this)
    void info()
    {
        cout << this->m_iId << ' ' << this->m_strName << endl;
    }
};

int Staff::m_iCount = 0;

//void init(Staff *s, int id, string name)
//{
//    s->iId = id;
//    s->strName = name;
//}

//void info(Staff *s)
//{
//    cout << s->iId << ' ' << s->strName << endl;
//}


int main()
{
    Staff s;
    s.info();
    s.count();

    Staff s2(1002, "jack");
    s2.info();
    s2.count();

    Staff s3(1004, "rose");
    s3.info();
    s3.count();

    cout << "Hello World!" << endl;
    return 0;
}
