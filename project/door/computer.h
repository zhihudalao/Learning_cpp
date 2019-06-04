#ifndef COMPUTER_H
#define COMPUTER_H

#include "public.h"
#include <list>
#include "input.h"

class Check
{
public:
    virtual bool check(string data
                       , const list<string> &l) = 0;
};

class PwdCheck: public Check
{
public:
    virtual bool check(string data
                       , const list<string> &l);
};

class CardCheck: public Check
{
public:
    virtual bool check(string data
                       , const list<string> &l);
};
class FingureCheck: public Check
{
public:
    virtual bool check(string data
                       , const list<string> &l);
};

class Computer
{
public:
    Computer();
    void add(Input &in);
    bool check(Input &in);

private:
    list<string> m_data;
};

#endif // COMPUTER_H
