#include <iostream>
#include <map>
#include <list>
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

//    bool operator <(const Student &other) const
//    {
//        return m_iId < other.m_iId;
//    }

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

typedef pair<int, Student> PAIR;

template<typename Key, typename U>
void show(const map<Key, U> &m)
{
    typename map<Key, U>::const_iterator iter;
    iter = m.begin();
    for (; iter != m.end(); iter++)
    {
        cout << "key:" << iter->first << ' '
             << " value:" << iter->second << endl;
    }
}

void showList(const list<PAIR> &m)
{
    list<PAIR>::const_iterator iter;
    iter = m.begin();
    for (; iter != m.end(); iter++)
    {
        cout << "key:" << iter->first << ' '
             << " value:" << iter->second << endl;
    }
}

bool com(const PAIR &p1, const PAIR &p2)
{
    return p1.second.score() > p2.second.score();
}

int main(void)
{
    map<int, Student> m;
    m.insert(PAIR(1001, Student(1001, "jack", 90)));
    m.insert(PAIR(1011, Student(1011, "rose", 88)));
    m.insert(PAIR(1009, Student(1009, "tony", 67)));
    m.insert(PAIR(1005, Student(1005, "jimy", 92)));
    m.insert(PAIR(1008, Student(1008, "oppo", 88)));
    show<int, Student>(m);


    list<PAIR> l;

    map<int, Student>::iterator iter = m.begin();
    for (; iter != m.end(); iter++)
    {
        l.push_back(*iter);
    }
    cout << "-------------------\n";
    showList(l);

    cout << "-------------------\n";
    l.sort(com);
    showList(l);






    return 0;
}
