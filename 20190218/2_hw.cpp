#include <iostream>
#include <string>
using namespace std;

class Square
{
public:
    Square(){m_lfWidth=0;}
    Square(double w){m_lfWidth=w;}
    double area(){return m_lfWidth*m_lfWidth;}
//    void copy(Square *s)
//    {
//        if (this == s)
//        {}
//        // ....
//    }
    void copy(Square &s)   //Square s;  s.copy(s); copy(&s, s)
    {
        if (this == &s)
        {
            return;
        }

        m_lfWidth = s.m_lfWidth;
    }

private:
    double m_lfWidth;
};

int main(void)
{
    Square s1(3);
    Square s2(5);

    cout << "s1 area = " << s1.area() << endl;
    cout << "s2 area = " << s2.area() << endl;

    cout << "-----------------------\n";
    s1.copy(s2);

    cout << "s1 area = " << s1.area() << endl;
    cout << "s2 area = " << s2.area() << endl;




    return 0;
}

#if 0
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
#endif
