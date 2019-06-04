#include "door.h"
#include <unistd.h>

Door::Door()
{

}

void Door::open()
{
    cout << "door opening...\n";
    sleep(3);
}

void Door::close()
{
    cout << "door closing...\n";
    sleep(3);
}


