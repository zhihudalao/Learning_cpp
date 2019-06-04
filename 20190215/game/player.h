#ifndef PLAYER_H
#define PLAYER_H

#include "skill.h"
#define NUM 3

class Player
{
public:
    Player();
    Player(string pname, int blood);

    void init();
    void info() const;

    Skill* getSkill() const;

    void beAttacked(const Player &other);
    bool isLost();

    void showWin();
    void showLost();

    ~Player();

private:
    string m_strName;
    int m_iBlood;
    Skill *m_skill[NUM];
};

#endif // PLAYER_H
