#include "mystring.h"

int main()
{
    MyString str("jack");
    cout << str.data() << endl;

    MyString str2(str);
    cout << str2.data() << endl;

    cout << "Hello World!" << endl;
    return 0;
}
