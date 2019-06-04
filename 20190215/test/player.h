#ifndef PLAYER_H
#define PLAYER_H

#include "skill.h"

class Player
{
public:
    Player();
    Player(string pname, int blood
           , string sname, int attack);

    void info() const;

    ~Player();

private:
    string m_strName;
    int m_iBlood;
    Skill m_skill;
};

#endif // PLAYER_H
