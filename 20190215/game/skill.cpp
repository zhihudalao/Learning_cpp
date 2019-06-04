#include "skill.h"

Skill::Skill()
{
    cout << "SKill()...\n";
}

Skill::Skill(string name, int attack)
{
    m_strName = name;
    m_iAttack = attack;
    cout << "SKill(string, int)...\n";
}

void Skill::info() const
{
    cout << "skill-->" << m_strName
         << " attack:" << m_iAttack << endl;
}

Skill::~Skill()
{
    cout << "~SKill()...\n";
}

string Skill::name()
{
    return m_strName;
}

int Skill::attack()
{
    return m_iAttack;
}
