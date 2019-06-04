#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string>

using namespace std;

class Student
{
public:
    Student();
    Student(const char *name, float score);
    void setInfo(const char *name, float score);
    float score();
    void info();

private:
    string m_strName;
    float m_fScore;
};


#endif // STUDENT_H
