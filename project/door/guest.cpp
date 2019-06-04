#include "guest.h"

Guest::Guest()
{
}

void Guest::pressRing(System &sys)
{
    sys.pressRing();
}

Staff::Staff()
{
}

void Staff::input(System &sys)
{
    sys.getInput().input();
}

Admin::Admin()
{
}

void Admin::open(System &sys)
{
    sys.setOpenSign(true);
}

void Admin::add(System &sys)
{
    sys.getComputer().add(sys.getInput());
}
