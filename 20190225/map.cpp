#include <iostream>
#include <string>
#include <map>
using namespace std;
//map存放数据是按一对数据的格式放入
//<key,value>  放入数据的时候自动以key作为比较的对象
//进行排序
//void show(const map<int, string> &m)
void show(const map<int, string, greater<int> > &m)
{
    map<int, string>::const_iterator iter;
    iter = m.begin();
    for (; iter != m.end(); iter++)
    {
        cout << iter->first << iter->second << endl;
    }
}

int main(void)
{
//    map<int, string> m;
    map<int, string, greater<int> > m;
    pair<int, string> p(1011, "jack");
    m.insert(p);
    m.insert(pair<int, string>(1002, "rose"));
    m.insert(pair<int, string>(1008, "pitr"));
    m.insert(pair<int, string>(1010, "alex"));

    show(m);
    cout << m.size() << endl;
//    cout << m[1019] << endl;
    //若存在1019，则用oppo替换掉原来的值
    //若不存在1019，则自动添加<1019,"oppo">到map中
    m[1019] = "oppo";
    show(m);
    cout << m.size() << endl;

//    iter = m.find(1010);
//    if (iter == m.end())
//    {
//        cout << "not found\n";
//    }
//    else
//    {
//        cout << iter->first << iter->second << endl;
//    }


    return 0;
}
