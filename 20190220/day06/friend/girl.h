#ifndef GIRL_H
#define GIRL_H

#include <iostream>
#include <string>
#include "boy.h"
using namespace std;

class Girl
{
public:
    Girl(string name="rose"
         , string wechat="66666");

    friend void getGirlName(Girl &g);
//    friend void Boy::getGirlName(Girl &g);
    friend class Boy;

private:
    string m_strName;
    string m_strWechat;
};

void getGirlName(Girl &g);

#endif // GIRL_H
