#include <iostream>
#include <list>
using namespace std;

template<typename U>
void show(const list<U> &l)
{
    typename list<U>::const_iterator iter;
    iter = l.begin();
    for (; iter != l.end(); iter++)
    {
        cout << *iter << endl;
    }
}

int main(void)
{
    list<int> l1;
    l1.push_back(12);
    l1.push_back(23);
    l1.push_back(6);

    list<int> l2;
    l2.push_back(8);
    l2.push_back(17);
    l2.push_back(12);
    l2.push_back(123);
    l2.push_back(129);

//    l1.sort();
//    l2.sort();
    //将l2合并到l1中
//    l1.merge(l2);
    cout << "l1:\n";
    show<int>(l1);
    cout << "l2:\n";
    show<int>(l2);

//    l1.splice(l1.begin(), l2);
//    l1.splice(l1.begin(), l2, l2.begin());
    list<int>::iterator iter = l2.begin();
    iter++;
    iter++;

    l1.splice(l1.begin(), l2, iter, l2.end());

    cout << "----------------------\n";
    cout << "l1:\n";
    show<int>(l1);
    cout << "l2:\n";
    show<int>(l2);

//    l1.splice();

    return 0;
}