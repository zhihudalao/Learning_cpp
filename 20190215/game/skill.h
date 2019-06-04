#ifndef SKILL_H
#define SKILL_H

#include "public.h"

class Skill
{
public:
    Skill();
    Skill(string name, int attack);
    void info() const;
    ~Skill();
    string name();
    int attack();

private:
    string m_strName;
    int m_iAttack;
};

#endif // SKILL_H
