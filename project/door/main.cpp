#include "guest.h"
#include <unistd.h>

void testGuest()
{
    System sys;
    Guest guest;
    Admin admin;

    while (true)
    {
        guest.pressRing(sys);
        sleep(1);
        admin.open(sys);
        sleep(1);
        sys.work();
    }
}
void testStaff()
{
    System sys;
    Admin admin;

    admin.add(sys);
    admin.add(sys);
    admin.add(sys);

    Staff jack;

    while (true)
    {
//        jack.pressRing(sys);
//        admin.open(sys);

        jack.input(sys);
        sleep(1);
        sys.work();
    }
}

int main(void)
{
//    testGuest();
    testStaff();

    return 0;
}
