#ifndef INPUT_H
#define INPUT_H

#include "public.h"

class Input
{
public:
    Input();
    void input();
    void clear();
    string data() const;
    string type() const;
    void waring() const;

private:
    string m_strData;
    string m_strType;
};

#endif // INPUT_H
