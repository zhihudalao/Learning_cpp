#include "mystring.h"

MyString::MyString()
{
    m_pData = new char[1];
    m_pData[0] = '\0';
}

MyString::MyString(const char *data)
{
    if (NULL == data)
    {
        m_pData = new char[1];
        m_pData[0] = '\0';
    }
    else
    {
        int iLen = strlen(data)+1;
        m_pData = new char[iLen];
        strcpy(m_pData, data);
    }
}

MyString::~MyString()
{
    delete []m_pData;
    m_pData = NULL;
    cout << "~MyString()...\n";
}

MyString::MyString(const MyString &str)
{
    int iLen = strlen(str.m_pData)+1;
    m_pData = new char[iLen];
//    m_pData[iLen-1] = '\0';
    strcpy(m_pData, str.m_pData);
}

const char *MyString::data() const
{
    return m_pData;
}




