#include <iostream>
#include <list>
using namespace std;

class Found
{
public:
    Found(const char *name = "mi", int f=0, int s=0)
    {
        m_strName = name;
        m_fGain = f;
        m_sGain = s;
    }

    int firstGain() const
    {
        return m_fGain;
    }
    int secondGain() const
    {
        return m_sGain;
    }

    int totalGain() const
    {
        return m_fGain+m_sGain;
    }

//    bool operator>(const Found &other) const
//    {
//        return totalGain() > other.totalGain();
//    }
    bool operator<(const Found &other) const
    {
        return totalGain() < other.totalGain();
    }

    friend ostream &operator <<(ostream &out, const Found &found);

private:
    string m_strName;
    int m_fGain;
    int m_sGain;
};

bool com(const Found &f1, const Found &f2)
{
    return f1.totalGain() > f2.totalGain();
}

ostream &operator <<(ostream &out, const Found &found)
{
    out << found.m_strName
        << " first gain:" << found.m_fGain
        << " seond gain:" << found.m_sGain
        << " total gain:" << found.totalGain();
    return out;
}

template<typename U>
void show(const list<U> &l)
{
    typename list<U>::const_iterator iter;
    iter = l.begin();
    for (; iter != l.end(); iter++)
    {
        cout << *iter << endl;
    }
}

bool predicate(const Found &found)
{
    return found.firstGain()<0 && found.secondGain()<0;
}

int main(void)
{
    list<Found> l;
    l.push_back(Found("vivo", 12, 10));
    l.push_back(Found("oppo", -1, 11));
    l.push_back(Found("huawei", 11, 20));
    l.push_back(Found("apple", -1, -5));
    l.push_back(Found("mi", 10, -6));
    l.sort(com);
    show(l);
    cout << "--------------------\n";
    l.remove_if(predicate);
    show(l);

    return 0;
}
