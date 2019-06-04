#include "girl.h"

Girl::Girl(string name, string wechat)
{
    m_strName = name;
    m_strWechat = wechat;

//    Boy b;
//    cout << b.m_iGirlNum << endl;
}

void getGirlName(Girl &g)
{
    cout << g.m_strName << endl;
    cout << g.m_strWechat << endl;
}
