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

bool predicate(int data)
{
    return 0 != data%2;
}
#if 0
void remove_if(int arr[5], bool predicate)
{
    for (int i=0; i<5; i++)
    {
//        if (predicate(arr[i]))
        if (mypre(arr[i])) //mypre.operator()(arr[i])
        {
            //delete arr[i];
        }
    }
}
#endif

class MyPre
{
public:
    bool operator()(int data)
    {
        return 0 != data%2;
    }
};

//class fund
//{

//    string m_strName;
//    int m_firstGain;
//    int m_seondGain;
//};

int main(void)
{
    int arr[7] = {12, 90, 63, 88, 34, 88, 66};
    list<int> l(arr, arr+7);  //[0,7)
    show(l);
    cout << "----------------\n";
//    l.reverse();
//    l.remove(88);
//    l.remove_if(predicate);
    MyPre mypre;
    l.remove_if(mypre);
    show(l);

    return 0;
}
