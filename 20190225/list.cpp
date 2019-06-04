#include <iostream>
#include <list>
using namespace std;

//list是一个类模板

template<typename U>
void show(const list<U> &l)
{
    list<int>::const_iterator iter = l.begin();
    for (; iter != l.end(); iter++)
    {
        cout << *iter << endl;
    }
}

template<typename U>
bool myGreater(const U &a, const U& b)
{
    return a > b;
}

int main(void)
{
    list<int> l;
    //尾插法
    l.push_back(1);
    l.push_back(2);
    l.push_back(3);
    //头插法
    l.push_front(77);
    l.push_front(88);
    l.push_front(99);

    show<int>(l);
    l.sort(myGreater<int>);
    cout << "--------------------\n\n";
    show<int>(l);

}
