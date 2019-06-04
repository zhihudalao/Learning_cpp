#include <iostream>
#include <vector>
using namespace std;

class Student
{
public:
    Student()
    {
        cout << "Student()...\n";
    }
    ~Student()
    {
        cout << "~Student()...\n";
    }
    Student(const Student &stu)
    {
        m_strName = stu.m_strName;
        m_fScore = stu.m_fScore;
        cout << "Student(const Student&)...\n";
    }
    Student(const char *name, float score)
    {
        m_strName = name;
        m_fScore = score;
        cout << "Student(const char *, float)"<< endl;
    }
    friend ostream &operator <<(ostream &out, const Student &stu);
    friend ostream &operator <<(ostream &out, const Student *stu);

private:
    string m_strName;
    float m_fScore;
};

ostream &operator <<(ostream &out, const Student &stu)
{
    out << stu.m_strName << ' ' << stu.m_fScore;
    return out;
}
ostream &operator <<(ostream &out, const Student *stu)
{
    out << stu->m_strName << ' ' << stu->m_fScore;
    return out;
}

template<typename U>
void show(const vector<U> &vec)
{
    for (unsigned int i=0; i<vec.size(); i++)
    {
//        cout << vec[i] << endl;
        cout << vec.at(i) << endl;
    }
}

int main()
{
    int a[] = {1, 2, 3, 4, 5, 6, 7};
    vector<int> vec(a, a+7);  //[0,7)
    show(vec);
    cout << "num:" << vec.size() << " real:" << vec.capacity() << endl;

    //删除最后一个元素，但是存储空间不变
    vec.pop_back();
    vec.pop_back();
    cout << "----------------\n";
    show(vec);
    cout << "num:" << vec.size() << " real:" << vec.capacity() << endl;


#if 0
    string str;
    cout << "num:" << str.size() << " real:" << str.capacity() << endl;
    str += "123456789012345";
    cout << "num:" << str.size() << " real:" << str.capacity() << endl;
    str += "123456789012345abcdefg";
    cout << "num:" << str.size() << " real:" << str.capacity() << endl;
    str += 'c';
    cout << "num:" << str.size() << " real:" << str.capacity() << endl;
    str += 'd';
    cout << "num:" << str.size() << " real:" << str.capacity() << endl;
    str += 'e';
    cout << "num:" << str.size() << " real:" << str.capacity() << endl;
#endif

#if 0
    //若 旧空间最大数据存放量 < 旧数据的个数+新数据的个数 <= 旧数据个数的两倍
    //则新申请空间的大小为：旧数据个数的两倍
    vector<Student*> vec;
    vec.reserve(20);
    cout << "num:" << vec.size() << " real:" << vec.capacity() << endl;
    vec.push_back(new Student("jack", 89));
    cout << "num:" << vec.size() << " real:" << vec.capacity() << endl;
    vec.push_back(new Student("rose", 87));
    cout << "num:" << vec.size() << " real:" << vec.capacity() << endl;
    vec.push_back(new Student("kity", 93));
    cout << "num:" << vec.size() << " real:" << vec.capacity() << endl;
    vec.push_back(new Student("tony", 91));
    cout << "num:" << vec.size() << " real:" << vec.capacity() << endl;
    vec.push_back(new Student("biqi", 92));
    cout << "num:" << vec.size() << " real:" << vec.capacity() << endl;
    show(vec);
#endif

#if 0
    vector<Student*> vec;
    cout << "num:" << vec.size() << " real:" << vec.capacity() << endl;
    vec.push_back(new Student("jack", 89));
    cout << "num:" << vec.size() << " real:" << vec.capacity() << endl;
    vec.push_back(new Student("rose", 87));
    cout << "num:" << vec.size() << " real:" << vec.capacity() << endl;
    vec.push_back(new Student("kity", 93));
    cout << "num:" << vec.size() << " real:" << vec.capacity() << endl;
    vec.push_back(new Student("tony", 91));
    cout << "num:" << vec.size() << " real:" << vec.capacity() << endl;
    vec.push_back(new Student("biqi", 92));
    cout << "num:" << vec.size() << " real:" << vec.capacity() << endl;
    show(vec);
#endif

#if 0
    vector<Student> vec;
    cout << "num:" << vec.size() << " real:" << vec.capacity() << endl;
    vec.push_back(Student("jack", 89));
    cout << "num:" << vec.size() << " real:" << vec.capacity() << endl;
    vec.push_back(Student("rose", 87));
    cout << "num:" << vec.size() << " real:" << vec.capacity() << endl;
    vec.push_back(Student("kity", 93));
    cout << "num:" << vec.size() << " real:" << vec.capacity() << endl;
    vec.push_back(Student("tony", 91));
    cout << "num:" << vec.size() << " real:" << vec.capacity() << endl;
    vec.push_back(Student("biqi", 92));
    cout << "num:" << vec.size() << " real:" << vec.capacity() << endl;
    show(vec);
#endif

    cout << "Hello World!" << endl;
    return 0;
}

