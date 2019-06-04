#include <iostream>
#include <vector>
using namespace std;

class Student
{
public:
    Student()
    {}
    Student(const char *name, float score)
    {
        m_strName = name;
        m_fScore = score;
    }
    friend ostream &operator <<(ostream &out, const Student &stu);

private:
    string m_strName;
    float m_fScore;
};

ostream &operator <<(ostream &out, const Student &stu)
{
    out << stu.m_strName << ' ' << stu.m_fScore;
    return out;
}

template<typename U>
void show(const vector<U> &vec)
{
    for (unsigned int i=0; i<vec.size(); i++)
    {
        cout << vec[i] << endl;
    }
}

int main()
{
    vector<Student> vec;
    vec.push_back(Student("jack", 89));
    vec.push_back(Student("rose", 87));
    vec.push_back(Student("kity", 93));
    vec.push_back(Student("tony", 91));
    show(vec);

    cout << "Hello World!" << endl;
    return 0;
}
