#include "player.h"

Player::Player()
{
    cout << "Player()...\n";
}

Player::Player(string pname, int blood
               , string sname, int attack)
    : m_skill(sname, attack)
{
    m_strName = pname;
    m_iBlood = blood;
    cout << "Player(str,int,str,int)...\n";
}

void Player::info() const
{
    cout << "player info --> "
         << m_strName << " blood:" << m_iBlood
         << endl;
    m_skill.info();
}

Player::~Player()
{
    cout << "~Player()...\n";
}
