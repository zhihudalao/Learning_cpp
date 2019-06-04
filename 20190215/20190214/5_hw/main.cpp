#include "mylist.h"

int main(void)
{
    MyList list;
    list.insert(11);
    list.insert(12);
    list.insert(13);
    list.insert(14);
    list.insert(15);
    list.display();
    cout << "-----------------\n";
//    Node *node = list.search(34);
//    if (NULL != node)
//    {
//        cout << node->data() << endl;
//    }
//    else
//    {
//        cout << "not found\n";
//    }

//    list.del(13);
//    list.display();

    return 0;
}
