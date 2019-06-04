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
        cout << vec.at(i) << endl;
    }
}

//template<typename U>
//void display(vector<U> &vec)
//{
//    typename vector<U>::iterator iter;
//    iter = vec.begin();
//    for (; iter != vec.end(); iter++)
//    {
//        cout << *iter << endl;
//    }
//}

void display(vector<int> &vec)
{
    vector<int>::iterator iter;
    iter = vec.begin();
    for (; iter != vec.end(); iter++)
    {
        *iter += 100;
        cout << *iter << endl;
    }
}
//void display(vector<int> &vec)
//{
//    vector<int>::reverse_iterator iter;
//    iter = vec.rbegin();
//    for (; iter != vec.rend(); iter++)
//    {
//        *iter += 100;
//        cout << *iter << endl;
//    }
//}


//void display(const vector<int> &vec)
//{
//    vector<int>::const_iterator iter;
//    iter = vec.cbegin();
//    for (; iter != vec.cend(); iter++)
//    {
////        *iter += 100; //error
//        cout << *iter << endl;
//    }
//}

//迭代器是一个类模板，用来遍历访问容器数据
int main()
{
    int a[] = {1, 2, 3, 4, 5, 6, 7};
    vector<int> vec(a, a+7);  //[0,7)
    display(vec);

//    vec.front();
//    vec.back();

//    vec.cbegin();
//    vec.cend();

//    vec.rbegin();
//    vec.rend();
////清除数据，空间不受影响
//    vec.clear();

//    vec.crbegin();
//    vec.crend();

//    vec.data();
//    cout << "-------------\n";
//    vec.assign(9, 888);
//    show(vec);
//    vec.max_size();
//    vec.resize();
//    vec.resize();
//    vec.empty();
//    vec.swap();


#if 0
    cout << vec.size() << ' ' << vec.capacity() << endl;

    vector<int>::iterator iter = vec.begin();
    for (; iter != vec.end();)
    {
        if (0 != *iter%2)
        {
            iter = vec.erase(iter);
        }
        else
        {
            iter++;
        }
    }

//    vec.insert(vec.begin()+2, 9, 888);
    cout << vec.size() << ' ' << vec.capacity() << endl;
    show(vec);
#endif

#if 0
    display(vec);
    cout << "--------------\n";
    show(vec);
#endif
    cout << "Hello World!" << endl;
    return 0;
}

