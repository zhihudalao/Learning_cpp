#include <iostream>
#include <algorithm>
using namespace std;

class Student
{
public:
    Student(int id = 0
            , const char *name = "stu"
            , float score= 0)
    {
        m_iId = id;
        m_strName = name;
        m_fScore = score;
    }

    bool operator <(const Student &other) const
    {
        return m_iId < other.m_iId;
    }

//    bool operator >(const Student &other) const
//    {
//        return m_iId > other.m_iId;
//    }

    int id() const
    {
        return m_iId;
    }
    float score() const
    {
        return m_fScore;
    }

    friend ostream &operator <<(ostream& out, const Student &s);
private:
    int m_iId;
    string m_strName;
    float m_fScore;
};

ostream &operator <<(ostream& out, const Student &s)
{
    out << "id:" << s.m_iId
        << " name:" << s.m_strName
        << " score:" << s.m_fScore;
    return out;
}

bool com(const Student &s1, const Student &s2)
{
    return s1.score() < s2.score();
}


int main(void)
{
    cout << max(23, 89) << endl;
    Student s1(1001, "aa", 99);
    Student s2(1002, "nb", 79);
//    cout << max(s1, s2) << endl;
    cout << max(s1, s2, com) << endl;





    return 0;
}
