#include "player.h"
#include <time.h>
#include <stdlib.h>

Player::Player()
{
    cout << "Player()...\n";
}

Player::Player(string pname, int blood)
{
    m_strName = pname;
    m_iBlood = blood;
    init();
    cout << "Player(str,int,str,int)...\n";
}

void Player::init()
{
    string strName;
    int attack = 0;
    cout << "init " << m_strName << " skill:\n";
    for (int i=0; i<NUM; i++)
    {
        cout << "please input skill name and attact:\n";
        cin >> strName >> attack;
        m_skill[i] = new Skill(strName, attack);
    }
}

void Player::info() const
{
    cout << "player info --> "
         << m_strName << " blood:" << m_iBlood
         << endl;
    //    m_skill.info();
}

Skill *Player::getSkill() const
{
    srand((unsigned int)time(NULL));
    return m_skill[rand()%NUM];
}

void Player::beAttacked(const Player &other)
{
    Skill *skill = other.getSkill();
    int attack = skill->attack();
    int iDropBlood = 0;
    if (attack > m_iBlood)
    {
        iDropBlood = m_iBlood;
    }
    else
    {
        iDropBlood = attack;
    }
    m_iBlood -= iDropBlood;

    cout << m_strName << " be attacked by " << other.m_strName
         << " using " << skill->name() << ", droped blood is "
         << iDropBlood << " left blood is " << m_iBlood << endl;
}

bool Player::isLost()
{
    return 0 == m_iBlood;
}

void Player::showWin()
{
    cout << m_strName << "says:hahahahhaha  lowb...\n";
}

void Player::showLost()
{
    cout << m_strName << "says:u nb ---> nb\n";
}

Player::~Player()
{
    cout << "~Player()...\n";
}
