#include <iostream>
#include <string>
#include <map>
using namespace std;
//map存放数据是按一对数据的格式放入
//<key,value>  放入数据的时候自动以key作为比较的对象
//进行排序
template<typename Key, typename T>
void show(const map<Key, T> &m)
{
    typename map<Key, T>::const_iterator iter;
    iter = m.begin();
    for (; iter != m.end(); iter++)
    {
        cout << iter->first << iter->second << endl;
    }
}

int main(void)
{
    map<char, int> m;
    map<char, int>::iterator iter;
    string str;
    cin >> str;
    for (int i=0; i<str.size(); i++)
    {
//        iter = m.find(str[i]);
//        if (iter == m.end())
//        {
//            m.insert(pair<char, int>(str[i], 1));
//        }
//        else
//        {
//            iter->second += 1;
//        }
        m[str[i]]++;
    }
    show<char, int>(m);

    return 0;
}
