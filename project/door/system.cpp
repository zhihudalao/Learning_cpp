#include "system.h"
#include <unistd.h>

System::System()
{
    m_bOpenSign = false;
}

void System::work()
{
    if (m_computer.check(m_input))
    {
        m_bOpenSign = true;
    }
    else
    {
        m_input.waring();
    }
    if (m_bOpenSign)
    {
        m_door.open();
        m_door.close();
        m_bOpenSign = false;
    }
}

void System::pressRing()
{
    cout << "di...ling...di...ling...\n";
    sleep(3);
    m_bRing = true;
}

bool System::ring() const
{
    return m_bRing;
}

void System::setOpenSign(bool openSign)
{
    m_bOpenSign = openSign;
}

Input &System::getInput()
{
    return m_input;
}

Computer &System::getComputer()
{
    return m_computer;
}
