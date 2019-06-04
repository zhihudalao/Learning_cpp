#include "player.h"
#include <unistd.h>

class Game
{
public:
    Game(){}
    Game(string n1, int b1, string n2, int b2)
        : m_p1(n1, b1), m_p2(n2, b2)
    {
        m_bSign = true;
    }

    void play()
    {
        while (true)
        {
            if (m_bSign)
            {
                m_p1.beAttacked(m_p2);
                if (m_p1.isLost())
                {
                    m_p2.showWin();
                    m_p1.showLost();
                    break;
                }
                m_bSign = false;
            }
            else
            {
                m_p2.beAttacked(m_p1);
                if (m_p2.isLost())
                {
                    m_p1.showWin();
                    m_p2.showLost();
                    break;
                }
                m_bSign = true;
            }
            cout << "------------------\n\n";
            sleep(1);
        }
    }

private:
    Player m_p1;
    Player m_p2;
    bool m_bSign;
};

int main()
{
    Game game("wukong", 1000, "bijita", 1000);
    game.play();

    cout << "Hello World!" << endl;
    return 0;
}
