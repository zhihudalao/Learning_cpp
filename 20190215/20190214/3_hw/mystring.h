#ifndef MYSTRING_H
#define MYSTRING_H

#include <iostream>
#include <string.h>
using namespace std;

class MyString
{
public:
    MyString();
    MyString(const char *data);
    ~MyString();
    MyString(const MyString &str);
    const char* data() const;

private:
    char *m_pData;
};

#endif // MYSTRING_H
