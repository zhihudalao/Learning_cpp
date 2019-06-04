#include <iostream>
#include <algorithm>
#include <vector>
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

template<typename U>
void show(const vector<U> &vec)
{
    for (int i=0; i<vec.size(); i++)
    {
        cout << vec[i] << endl;
    }
}

template<typename U>
bool myGreater(const U &a, const U &b)
{
    return a > b;
}

template<typename U>
class Com
{
public:
    bool operator()(const U &a, const U &b)
    {
        return a > b;
    }
};

int main(void)
{
    int arr[7] = {122, 67, 200, 37, 89, 12, 88};
    vector<int> v(arr, arr+7);

    //    sort(v.begin(), v.end());
//    sort(v.begin(), v.end(), myGreater<int>);
//    Com<int> com;
//    sort(v.begin(), v.end(), com);
    sort(v.begin(), v.end(), Com<int>());
    show<int>(v);





    return 0;
}
