#include <iostream>
#include <map>
#include <list>
using namespace std;

class Student
{
public:
    Student(int id = 0, const char *name = "stu")
    {
        m_iId = id;
        m_strName = name;
    }

    bool operator <(const Student &other) const
    {
        return m_iId < other.m_iId;
    }

    bool operator >(const Student &other) const
    {
        return m_iId > other.m_iId;
    }

    int id() const
    {
        return m_iId;
    }

    friend ostream &operator <<(ostream& out, const Student &s);
private:
    int m_iId;
    string m_strName;
};

ostream &operator <<(ostream& out, const Student &s)
{
    out << "id:" << s.m_iId << " name:" << s.m_strName;
    return out;
}

class Com
{
public:
    bool operator()(const Student &s1, const Student &s2)
    {
        return s1.id() > s2.id();
    }
};

template<typename Key, typename U>
//void show(const map<Key, U, Com > &m)
void show(const map<Key, U, greater<Key> > &m)
{
    typename map<Key, U>::const_iterator iter;
    iter = m.begin();
    for (; iter != m.end(); iter++)
    {
        cout << "key:" << iter->first
             << " value:" << iter->second << endl;
    }
}

typedef pair<Student, double> PAIR;

int main()
{
//    map<Student, double> m;
//    map<Student, double, Com> m;
    map<Student, double, greater<Student> > m;
    m.insert(PAIR(Student(1010, "jack"), 89));
    m.insert(PAIR(Student(1002, "rose"), 88));
    m.insert(PAIR(Student(1008, "tony"), 93));
    m.insert(PAIR(Student(1003, "jimy"), 72));

    show<Student, double>(m);

    cout << "Hello World!" << endl;
    return 0;
}
















