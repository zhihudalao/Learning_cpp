#include <iostream>
#include <map>
#include <list>
using namespace std;

struct Item
{
    int a;
    char b[20];
};

template<typename Key, typename U>
void show(const map<Key, U> &m)
{
    typename map<Key, U>::const_iterator iter;
    iter = m.begin();
    for (; iter != m.end(); iter++)
    {
        cout << "key:" << iter->first
             << " value:" << iter->second.a
             << ' ' << iter->second.b << endl;
    }
}

int main()
{
    Item s[4] = {{102, "what"},
            {33, "hello"},
            {198, "world"},
            {45, "c++"}};

    map<string, Item> m;
    for (int i=0; i<4; i++)
    {
        m.insert(pair<string, Item>(s[i].b, s[i]));
    }
    show<string, Item>(m);

    map<string, Item>::iterator iter = m.begin();
    map<string, Item>::iterator ret;
    for (; iter != m.end();)
    {
        if (iter->second.a > 100)
        {//tmp = iter;   ++iter;
            m.erase(iter++);
        }
        else
        {
            iter++;
        }
    }

    cout << "Hello World!" << endl;
    return 0;
}
