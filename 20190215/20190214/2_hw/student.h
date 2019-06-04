#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string>
using namespace std;

class Student
{
public:
    Student();
    Student(const char *name, float score, string sex);
    void show();
    ~Student();

private:
    char *m_pName;
    float m_fScore;
    string m_strSex;
};

#endif // STUDENT_H
