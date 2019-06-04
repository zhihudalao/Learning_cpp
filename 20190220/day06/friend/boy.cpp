#include "boy.h"
#include "girl.h"

Boy::Boy()
{

}

void Boy::getGirlName(Girl &g)
{
    cout << g.m_strName << endl;
}

void Boy::getGirlWechat(Girl &g)
{
    cout << g.m_strWechat << endl;
}
