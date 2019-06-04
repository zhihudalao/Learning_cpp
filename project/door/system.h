#ifndef SYSTEM_H
#define SYSTEM_H

#include "door.h"
#include "input.h"
#include "computer.h"

class System
{
public:
    System();
    void work();
    void pressRing();
    bool ring() const;
    void setOpenSign(bool openSign);
    Input &getInput();
    Computer &getComputer();

private:
    Door m_door;
    Input m_input;
    Computer m_computer;
    bool m_bOpenSign;
    bool m_bRing;
};

#endif // SYSTEM_H
