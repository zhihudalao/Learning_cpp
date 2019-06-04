#include "student.h"

Student::Student()
{
}

Student::Student(const char *name, float score)
{
    m_strName = name;
    m_fScore = score;
}

void Student::setInfo(const char *name, float score)
{
    m_strName = name;
    m_fScore = score;
}

float Student::score()
{
    return m_fScore;
}

void Student::info()
{
    cout << m_strName << ' ' << m_fScore << endl;
}
