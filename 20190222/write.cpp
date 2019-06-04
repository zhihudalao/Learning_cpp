#include <iostream>
#include <fstream>
using namespace std;

class Student
{
public:
    Student(const char *name, float score = 60)
        : m_strName(name), m_fScore(score)
    {}
    string name() const
    {
        return m_strName;
    }
    float score() const
    {
        return m_fScore;
    }
private:
    string m_strName;
    float m_fScore;
};

ofstream &operator<< (ofstream &file, const Student &stu)
{
    file << stu.name() << ' ' << stu.score();
    return file;
}


struct Tec
{
    char caName[32];
    char caCourse[16];
};

int main()
{
    ofstream file("tec.txt");
    Tec t;
    file.write((char*)&t, sizeof(t));


#if 0
    //默认以写和截断的方式打开文件
    //在构造函数体中自动调用open函数打开文件
    //若文件不存在，则自动创建一个文件
    ofstream file("tec.txt");
#endif

#if 0
    ofstream file;
    //默认以写和截断的方式打开文件
    //若文件不存在，则自动创建一个文件
    file.open("stu.txt");
#endif

  //  ofstream file;
    /*
    *  - app
    *  - ate
    *  - binary
    *  - in
    *  - out
    *  - trunc
    */

#if 0
    file.open("stu.txt", ios_base::out|ios_base::app);
    if (file.is_open())
    {
        cout << "open ok\n";

        file << "上海自来水来自海上\n"
             << 123456 << endl
             << 3.1415926 << endl;

        Student stu("jack", 90);
//        file << stu.name() << ' ' << stu.score() << endl;

        file << stu << endl;

        file.close();
    }
#endif

    cout << "Hello World!" << endl;
    return 0;
}
