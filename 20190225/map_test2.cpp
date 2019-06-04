#include <iostream>
#include <string>
#include <map>
using namespace std;

class Student
{
public:
    Student(){}
    Student(int id, const char *name, float score)
    {
        m_iId = id;
        m_strName = name;
        m_fScore = score;
    }
    int id() const
    {
        return m_iId;
    }
    string name() const
    {
        return m_strName;
    }
    float score() const
    {
        return m_fScore;
    }
private:
    int m_iId;
    string m_strName;
    float m_fScore;
};

ostream &operator <<(ostream& out, const Student *stu)
{
    out << "id:" << stu->id()
        << " name:" << stu->name()
        << " score:" << stu->score();
    return out;
}

template<typename Key, typename T>
void show(const map<Key, T> &m)
{
    typename map<Key, T>::const_iterator iter;
    iter = m.begin();
    for (; iter != m.end(); iter++)
    {
        cout << iter->first << iter->second << endl;
    }
}

typedef pair<int, Student*> PAIR;

int main(void)
{
    map<int, Student *> stumap;
    stumap.insert(PAIR(1001, new Student(1001, "jack", 89)));
    stumap.insert(PAIR(1011, new Student(1011, "piter", 99)));
    stumap.insert(PAIR(1008, new Student(1009, "rose", 79)));

    show<int, Student*>(stumap);

    return 0;
}
