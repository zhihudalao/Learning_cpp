#ifndef GUEST_H
#define GUEST_H

#include "system.h"

class Guest
{
public:
    Guest();
    void pressRing(System &sys);
};

class Staff : public Guest
{
public:
    Staff();
    void input(System &sys);
};

class Admin: public Staff
{
public:
    Admin();
    void open(System &sys);
    void add(System &sys);
};

#endif // GUEST_H
