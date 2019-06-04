#include <iostream>
#include <map>
#include <vector>
using namespace std;

typedef map<string, vector<string> > MAP;

void showVec(const vector<string> &vec)
{
    for (int i=0; i<vec.size(); i++)
    {
        cout << vec[i] << ' ';
    }
    cout << endl;
}

void showMap(const MAP &m)
{
    MAP::const_iterator iter = m.begin();
    for (; iter != m.end(); iter++)
    {
        cout << iter->first << ' ';
        showVec(iter->second);
    }
}

int main()
{
    MAP m;
    string second;
    string first;
    while (true)
    {
        cout << "please input second name[exit]:\n";
        cin >> second;
        if (second == string("exit"))
        {
            break;
        }
        while (true)
        {
            cout << "please input " << second << " first Name[end]:\n";
            cin >> first;
            if (first == string("end"))
            {
                break;
            }
            m[second].push_back(first);
        }
    }

    showMap(m);
cout << "----------------------\n";
//    showVec(m["aa"]);
    MAP::iterator ret = m.find("aa");
    if (ret == m.end())
    {
        cout << "not found\n";
    }
    else
    {
        showVec(ret->second);
    }

    return 0;
}

