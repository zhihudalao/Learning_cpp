#include "computer.h"
#include <algorithm>

Computer::Computer()
{
}

void Computer::add(Input &in)
{
    //card :    card_668_card
    //pwd :  123_123_pwd
    //fingure: 567_fingure_567
    in.input();
    string data;
    if (string("card") == in.type())
    {
        data = "card_"+in.data()+"_card";
    }
    else if (string("pwd") == in.type())
    {
        data = in.data()+'_'+in.data()+"_pwd";
    }
    else if (string("fingure") == in.type())
    {
        data = in.data()+"_fingure_"+in.data();
    }
    else
    {
        in.waring();
        data.clear();
    }
    if (!data.empty())
    {
        m_data.push_back(data);
    }
    in.clear();
}

bool Computer::check(Input &in)
{
    string type = in.type();
    string data = in.data();
    in.clear();

    Check *pcheck = NULL;
    if (string("card") == type)
    {
        pcheck = new CardCheck;
    }
    else if (string("pwd") == type)
    {
        pcheck = new PwdCheck;
    }
    else if (string("fingure") == type)
    {
        pcheck = new FingureCheck;
    }
    else
    {
        pcheck = NULL;
    }
    bool ret = false;
    if (NULL != pcheck)
    {
        ret = pcheck->check(data, m_data);
        delete pcheck;
    }

    return ret;
}

bool PwdCheck::check(string data, const list<string> &l)
{
    data = data + '_' + data + "_pwd";
    list<string>::const_iterator ret;
    ret = find(l.begin(), l.end(), data);
    if (ret == l.end())
    {
        return false;
    }
    return true;
}

bool CardCheck::check(string data, const list<string> &l)
{
    string str = "card_"+data+"_card";
    list<string>::const_iterator ret;
    ret = find(l.begin(), l.end(), str);
    if (ret == l.end())
    {
        return false;
    }
    return true;
}

bool FingureCheck::check(string data, const list<string> &l)
{
    data = data+"_fingure_"+data;
    list<string>::const_iterator ret;
    ret = find(l.begin(), l.end(), data);
    if (ret == l.end())
    {
        return false;
    }
    return true;
}
