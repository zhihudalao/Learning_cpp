#include "student.h"
#include <string.h>

Student::Student()
{
    m_pName = new char[1];
    m_pName[0] = '\0';
    m_fScore = 0;
    m_strSex = "male";
}

Student::Student(const char *name, float score, string sex)
{
    if (NULL == name)
    {
        m_pName = new char[1];
        m_pName[0] = '\0';
        m_fScore = 0;
        m_strSex = "male";
    }
    else
    {
        int iLen = strlen(name)+1;
        m_pName = new char[iLen];
        strcpy(m_pName, name);

        m_fScore = score;
        m_strSex = sex;
    }
}

void Student::show()
{
    cout << "name:" << m_pName
         << " score:" << m_fScore
         << " sex:" << m_strSex << endl;
}

Student::~Student()
{
    delete []m_pName;
    m_pName = NULL;
    cout << "~Student()..." << endl;
}
